Input test program to parse: **p1.txt**

Lex specifications simple: **specif11.lxi**

Lex specifications for returning the tokens to yacc: **specif2.lxi**

yacc specification file: **lang.y**

Commands (lex simple):
```
lex specif11.lxi
gcc lex.yy.c -o lex_exe
./lex_exe < p1.txt
```

Commands (lex + yacc):
```
lex specif2.lxi
yacc -d lang.y
gcc lex.yy.c y.tab.c -o fin_exe -lfl
./fin_exe < p1.txt
```
