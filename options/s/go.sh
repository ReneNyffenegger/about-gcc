gcc        main.c  -o out
gcc -s     main.c  -o out-s
gcc    -g  main.c  -o out-g
gcc -s -g  main.c  -o out-s-g

strip      out     -o out-stripped
strip      out-s   -o out-s-stripped
strip      out-g   -o out-g-stripped
strip      out-s-g -o out-s-g-stripped


ls -l out*
