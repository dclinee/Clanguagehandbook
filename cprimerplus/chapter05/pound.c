➜  chapter05 git:(master) ✗ make convert      
cc     convert.c   -o convert
➜  chapter05 git:(master) ✗ ./convert
ch = C, i = 67, f1 = 67.00
ch = D, i = 203, f1 = 67.00
➜  chapter05 git:(master) ✗ make convert
cc     convert.c   -o convert
➜  chapter05 git:(master) ✗ ./convert
ch = C, i = 67, f1 = 67.00
ch = D, i = 203, f1 = 339.00
➜  chapter05 git:(master) ✗  xoj
➜  chapter05 git:(master) ✗ make convert
cc     convert.c   -o convert
convert.c:15:8: warning: implicit conversion from 'int' to 'char'
      changes value from 1107 to 83 [-Wconstant-conversion]
  ch = 1107;
     ~ ^~~~
1 warning generated.
➜  chapter05 git:(master) ✗ ./convert
ch = C, i = 67, f1 = 67.00
ch = D, i = 203, f1 = 339.00
Now ch = S
➜  chapter05 git:(master) ✗ make convert
cc     convert.c   -o convert
convert.c:17:8: warning: implicit conversion from 'double' to 'char'
      changes value from 80.89 to 80 [-Wliteral-conversion]
  ch = 80.89;
     ~ ^~~~~
convert.c:15:8: warning: implicit conversion from 'int' to 'char'
      changes value from 1107 to 83 [-Wconstant-conversion]
  ch = 1107;
     ~ ^~~~
2 warnings generated.
➜  chapter05 git:(master) ✗ ./convert
ch = C, i = 67, f1 = 67.00
ch = D, i = 203, f1 = 339.00
Now ch = S
Now ch = P
➜  chapter05 git:(master) ✗ ll
total 264
-rw-r--r--  1 mrc20  staff   210B Jun 12 21:09 add_one.c
-rw-r--r--  1 mrc20  staff   215B Jun 12 21:12 add_one_test.c
-rw-r--r--  1 mrc20  staff   214B Jun 12 21:22 add_one_test_more.c
-rw-r--r--  1 mrc20  staff   195B Jun 14 20:30 addemup.c
-rw-r--r--  1 mrc20  staff   368B Jun 14 20:26 bottles.c
-rw-r--r--  1 mrc20  staff   370B Jun 14 22:07 compound_statement.c
-rwxr-xr-x  1 mrc20  staff    33K Jun 15 22:42 convert
-rw-r--r--  1 mrc20  staff   370B Jun 15 22:42 convert.c
-rw-r--r--  1 mrc20  staff   339B Apr  5 18:56 divide.c
-rw-r--r--  1 mrc20  staff   170B Apr  5 18:56 division.c
-rw-r--r--  1 mrc20  staff   176B Jun 14 21:42 full_expression.c
-rw-r--r--  1 mrc20  staff   236B Nov 27  2021 golf.c
-rw-r--r--  1 mrc20  staff   444B Jun 12 21:50 increment_operator.c
-rw-r--r--  1 mrc20  staff   523B Jun 12 20:52 min_sec.c
-rw-r--r--  1 mrc20  staff   226B Jun 12 22:15 post_pre.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:04 postfix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:02 prefix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   184B Jun 12 20:24 rules.c
-rw-r--r--  1 mrc20  staff   261B Nov 27  2021 shoes1.c
-rw-r--r--  1 mrc20  staff   368B Nov 27  2021 shoes2.c
-rw-r--r--  1 mrc20  staff   135B Jun 14 21:21 side_effect.c
-rw-r--r--  1 mrc20  staff   160B Jun 14 21:26 side_effect_one.c
-rw-r--r--  1 mrc20  staff   258B Jun 12 20:34 sizeof.c
-rw-r--r--  1 mrc20  staff   158B Nov 27  2021 squares.c
-rw-r--r--  1 mrc20  staff   644B Apr  5 18:56 wheat.c
➜  chapter05 git:(master) ✗ rm convert                               
➜  chapter05 git:(master) make cast_operator
cc     cast_operator.c   -o cast_operator
cast_operator.c:7:24: error: use of undeclared identifier 'mouse'
  printf("mice = %d\n",mouse);
                       ^
cast_operator.c:9:24: error: use of undeclared identifier 'mouse'
  printf("mice = %d\n",mouse);
                       ^
2 errors generated.
make: *** [cast_operator] Error 1
➜  chapter05 git:(master) ✗ make cast_operator   
cc     cast_operator.c   -o cast_operator
                                    
rm: p: No such file or directory    ound
➜  chapter05 git:(master) ✗ ll
total 208
-rw-r--r--  1 mrc20  staff   210B Jun 12 21:09 add_one.c
-rw-r--r--  1 mrc20  staff   215B Jun 12 21:12 add_one_test.c
-rw-r--r--  1 mrc20  staff   214B Jun 12 21:22 add_one_test_more.c
-rw-r--r--  1 mrc20  staff   195B Jun 14 20:30 addemup.c
-rw-r--r--  1 mrc20  staff   368B Jun 14 20:26 bottles.c
-rw-r--r--  1 mrc20  staff   228B Jun 15 22:54 cast_operator.c
-rw-r--r--  1 mrc20  staff   370B Jun 14 22:07 compound_statement.c
-rw-r--r--  1 mrc20  staff   370B Jun 15 22:42 convert.c
-rw-r--r--  1 mrc20  staff   339B Apr  5 18:56 divide.c
-rw-r--r--  1 mrc20  staff   170B Apr  5 18:56 division.c
-rw-r--r--  1 mrc20  staff   176B Jun 14 21:42 full_expression.c
-rw-r--r--  1 mrc20  staff   236B Nov 27  2021 golf.c
-rw-r--r--  1 mrc20  staff   444B Jun 12 21:50 increment_operator.c
-rw-r--r--  1 mrc20  staff   523B Jun 12 20:52 min_sec.c
-rw-r--r--  1 mrc20  staff   226B Jun 12 22:15 post_pre.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:04 postfix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   375B Jun 15 23:09 pound.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:02 prefix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   184B Jun 12 20:24 rules.c
-rw-r--r--  1 mrc20  staff   261B Nov 27  2021 shoes1.c
-rw-r--r--  1 mrc20  staff   368B Nov 27  2021 shoes2.c
-rw-r--r--  1 mrc20  staff   135B Jun 14 21:21 side_effect.c
-rw-r--r--  1 mrc20  staff   160B Jun 14 21:26 side_effect_one.c
-rw-r--r--  1 mrc20  staff   258B Jun 12 20:34 sizeof.c
-rw-r--r--  1 mrc20  staff   158B Nov 27  2021 squares.c
-rw-r--r--  1 mrc20  staff   644B Apr  5 18:56 wheat.c
➜  chapter05 git:(master) ✗ ll
total 216
-rw-r--r--  1 mrc20  staff   210B Jun 12 21:09 add_one.c
-rw-r--r--  1 mrc20  staff   215B Jun 12 21:12 add_one_test.c
-rw-r--r--  1 mrc20  staff   214B Jun 12 21:22 add_one_test_more.c
-rw-r--r--  1 mrc20  staff   195B Jun 14 20:30 addemup.c
-rw-r--r--  1 mrc20  staff   368B Jun 14 20:26 bottles.c
-rw-r--r--  1 mrc20  staff   228B Jun 15 22:54 cast_operator.c
-rw-r--r--  1 mrc20  staff   370B Jun 14 22:07 compound_statement.c
-rw-r--r--  1 mrc20  staff   370B Jun 15 22:42 convert.c
-rw-r--r--  1 mrc20  staff   339B Apr  5 18:56 divide.c
-rw-r--r--  1 mrc20  staff   170B Apr  5 18:56 division.c
-rw-r--r--  1 mrc20  staff   176B Jun 14 21:42 full_expression.c
-rw-r--r--  1 mrc20  staff   236B Nov 27  2021 golf.c
-rw-r--r--  1 mrc20  staff   444B Jun 12 21:50 increment_operator.c
-rw-r--r--  1 mrc20  staff   523B Jun 12 20:52 min_sec.c
-rw-r--r--  1 mrc20  staff   226B Jun 12 22:15 post_pre.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:04 postfix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   5.0K Jun 15 23:10 pound.c
-rw-r--r--  1 mrc20  staff   556B Jun 12 22:02 prefix_increment_decrement.c
-rw-r--r--  1 mrc20  staff   184B Jun 12 20:24 rules.c
-rw-r--r--  1 mrc20  staff   261B Nov 27  2021 shoes1.c
-rw-r--r--  1 mrc20  staff   368B Nov 27  2021 shoes2.c
-rw-r--r--  1 mrc20  staff   135B Jun 14 21:21 side_effect.c
-rw-r--r--  1 mrc20  staff   160B Jun 14 21:26 side_effect_one.c
-rw-r--r--  1 mrc20  staff   258B Jun 12 20:34 sizeof.c
-rw-r--r--  1 mrc20  staff   158B Nov 27  2021 squares.c
-rw-r--r--  1 mrc20  staff   644B Apr  5 18:56 wheat.c
➜  chapter05 git:(master) ✗ 