#!/bin/sh

for prog in cc1 cc1plus collect2 f771 jc1 jvgenmain; do
    printf "%-10s : %s\n" $prog $(gcc -print-prog-name=$prog)
done
