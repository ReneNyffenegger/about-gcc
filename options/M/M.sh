echo Show dependencies of files:
echo ---------------------------
cd src
for c in *.c; do
  gcc -MM $c
done
