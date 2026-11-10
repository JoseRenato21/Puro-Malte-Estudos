#!/usr/bin/env bash
# Compila todos os exemplos em build/. Uso: ./compilar.sh [arquivo.c]
# Sem argumento, compila tudo e mostra um resumo.
set -u
CC=${CC:-cc}
CFLAGS="-Wall -Wextra -std=gnu11"
mkdir -p build

compila() {
  local src="$1" nome
  nome=$(basename "${src%.c}")
  if "$CC" $CFLAGS "$src" -o "build/$nome" -lm 2>"build/$nome.log"; then
    echo "ok     $src"; rm -f "build/$nome.log"
  else
    echo "falhou $src (veja build/$nome.log)"; return 1
  fi
}

if [ $# -ge 1 ]; then compila "$1"; exit $?; fi

falhas=0
while IFS= read -r -d '' src; do
  case "$src" in
    */Arqv_de_Cab/*) continue ;;   # precisa de biblio.c, compilado abaixo
    */.dist/*) continue ;;
  esac
  compila "$src" || falhas=$((falhas+1))
done < <(find "Aulas C" Beecrowd -name '*.c' -print0 | sort -z)

dir="Aulas C/8_Funções/Arqv_de_Cab"
if "$CC" $CFLAGS "$dir/Arqv_de_Cabeçalho.c" "$dir/biblio.c" -o build/Arqv_de_Cabecalho 2>build/Arqv_de_Cabecalho.log; then
  echo "ok     $dir (com biblio.c)"; rm -f build/Arqv_de_Cabecalho.log
else
  echo "falhou $dir (veja build/Arqv_de_Cabecalho.log)"; falhas=$((falhas+1))
fi

echo "falhas: $falhas"
exit $falhas
