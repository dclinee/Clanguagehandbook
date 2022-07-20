
num_test:     file format elf64-x86-64


Disassembly of section .init:

0000000000001000 <_init>:
    1000:	f3 0f 1e fa          	endbr64 
    1004:	48 83 ec 08          	sub    $0x8,%rsp
    1008:	48 8b 05 d9 2f 00 00 	mov    0x2fd9(%rip),%rax        # 3fe8 <__gmon_start__@Base>
    100f:	48 85 c0             	test   %rax,%rax
    1012:	74 02                	je     1016 <_init+0x16>
    1014:	ff d0                	call   *%rax
    1016:	48 83 c4 08          	add    $0x8,%rsp
    101a:	c3                   	ret    

Disassembly of section .plt:

0000000000001020 <.plt>:
    1020:	ff 35 5a 2f 00 00    	push   0x2f5a(%rip)        # 3f80 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 5b 2f 00 00 	bnd jmp *0x2f5b(%rip)        # 3f88 <_GLOBAL_OFFSET_TABLE_+0x10>
    102d:	0f 1f 00             	nopl   (%rax)
    1030:	f3 0f 1e fa          	endbr64 
    1034:	68 00 00 00 00       	push   $0x0
    1039:	f2 e9 e1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    103f:	90                   	nop
    1040:	f3 0f 1e fa          	endbr64 
    1044:	68 01 00 00 00       	push   $0x1
    1049:	f2 e9 d1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    104f:	90                   	nop
    1050:	f3 0f 1e fa          	endbr64 
    1054:	68 02 00 00 00       	push   $0x2
    1059:	f2 e9 c1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    105f:	90                   	nop
    1060:	f3 0f 1e fa          	endbr64 
    1064:	68 03 00 00 00       	push   $0x3
    1069:	f2 e9 b1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    106f:	90                   	nop
    1070:	f3 0f 1e fa          	endbr64 
    1074:	68 04 00 00 00       	push   $0x4
    1079:	f2 e9 a1 ff ff ff    	bnd jmp 1020 <_init+0x20>
    107f:	90                   	nop
    1080:	f3 0f 1e fa          	endbr64 
    1084:	68 05 00 00 00       	push   $0x5
    1089:	f2 e9 91 ff ff ff    	bnd jmp 1020 <_init+0x20>
    108f:	90                   	nop
    1090:	f3 0f 1e fa          	endbr64 
    1094:	68 06 00 00 00       	push   $0x6
    1099:	f2 e9 81 ff ff ff    	bnd jmp 1020 <_init+0x20>
    109f:	90                   	nop

Disassembly of section .plt.got:

00000000000010a0 <__cxa_finalize@plt>:
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	f2 ff 25 1d 2f 00 00 	bnd jmp *0x2f1d(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    10ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

00000000000010b0 <_ZNSirsERi@plt>:
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	f2 ff 25 d5 2e 00 00 	bnd jmp *0x2ed5(%rip)        # 3f90 <_ZNSirsERi@GLIBCXX_3.4>
    10bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010c0 <__cxa_atexit@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 cd 2e 00 00 	bnd jmp *0x2ecd(%rip)        # 3f98 <__cxa_atexit@GLIBC_2.2.5>
    10cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 c5 2e 00 00 	bnd jmp *0x2ec5(%rip)        # 3fa0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
    10db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010e0 <_ZNSolsEPFRSoS_E@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 bd 2e 00 00 	bnd jmp *0x2ebd(%rip)        # 3fa8 <_ZNSolsEPFRSoS_E@GLIBCXX_3.4>
    10eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010f0 <__stack_chk_fail@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 b5 2e 00 00 	bnd jmp *0x2eb5(%rip)        # 3fb0 <__stack_chk_fail@GLIBC_2.4>
    10fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001100 <_ZNSt8ios_base4InitC1Ev@plt>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	f2 ff 25 ad 2e 00 00 	bnd jmp *0x2ead(%rip)        # 3fb8 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    110b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

0000000000001110 <_ZNSolsEi@plt>:
    1110:	f3 0f 1e fa          	endbr64 
    1114:	f2 ff 25 a5 2e 00 00 	bnd jmp *0x2ea5(%rip)        # 3fc0 <_ZNSolsEi@GLIBCXX_3.4>
    111b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001120 <_start>:
    1120:	f3 0f 1e fa          	endbr64 
    1124:	31 ed                	xor    %ebp,%ebp
    1126:	49 89 d1             	mov    %rdx,%r9
    1129:	5e                   	pop    %rsi
    112a:	48 89 e2             	mov    %rsp,%rdx
    112d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1131:	50                   	push   %rax
    1132:	54                   	push   %rsp
    1133:	4c 8d 05 86 02 00 00 	lea    0x286(%rip),%r8        # 13c0 <__libc_csu_fini>
    113a:	48 8d 0d 0f 02 00 00 	lea    0x20f(%rip),%rcx        # 1350 <__libc_csu_init>
    1141:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 1209 <main>
    1148:	ff 15 92 2e 00 00    	call   *0x2e92(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    114e:	f4                   	hlt    
    114f:	90                   	nop

0000000000001150 <deregister_tm_clones>:
    1150:	48 8d 3d b9 2e 00 00 	lea    0x2eb9(%rip),%rdi        # 4010 <__TMC_END__>
    1157:	48 8d 05 b2 2e 00 00 	lea    0x2eb2(%rip),%rax        # 4010 <__TMC_END__>
    115e:	48 39 f8             	cmp    %rdi,%rax
    1161:	74 15                	je     1178 <deregister_tm_clones+0x28>
    1163:	48 8b 05 6e 2e 00 00 	mov    0x2e6e(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable@Base>
    116a:	48 85 c0             	test   %rax,%rax
    116d:	74 09                	je     1178 <deregister_tm_clones+0x28>
    116f:	ff e0                	jmp    *%rax
    1171:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1178:	c3                   	ret    
    1179:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001180 <register_tm_clones>:
    1180:	48 8d 3d 89 2e 00 00 	lea    0x2e89(%rip),%rdi        # 4010 <__TMC_END__>
    1187:	48 8d 35 82 2e 00 00 	lea    0x2e82(%rip),%rsi        # 4010 <__TMC_END__>
    118e:	48 29 fe             	sub    %rdi,%rsi
    1191:	48 89 f0             	mov    %rsi,%rax
    1194:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1198:	48 c1 f8 03          	sar    $0x3,%rax
    119c:	48 01 c6             	add    %rax,%rsi
    119f:	48 d1 fe             	sar    %rsi
    11a2:	74 14                	je     11b8 <register_tm_clones+0x38>
    11a4:	48 8b 05 45 2e 00 00 	mov    0x2e45(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    11ab:	48 85 c0             	test   %rax,%rax
    11ae:	74 08                	je     11b8 <register_tm_clones+0x38>
    11b0:	ff e0                	jmp    *%rax
    11b2:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    11b8:	c3                   	ret    
    11b9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011c0 <__do_global_dtors_aux>:
    11c0:	f3 0f 1e fa          	endbr64 
    11c4:	80 3d ad 30 00 00 00 	cmpb   $0x0,0x30ad(%rip)        # 4278 <completed.8061>
    11cb:	75 2b                	jne    11f8 <__do_global_dtors_aux+0x38>
    11cd:	55                   	push   %rbp
    11ce:	48 83 3d f2 2d 00 00 	cmpq   $0x0,0x2df2(%rip)        # 3fc8 <__cxa_finalize@GLIBC_2.2.5>
    11d5:	00 
    11d6:	48 89 e5             	mov    %rsp,%rbp
    11d9:	74 0c                	je     11e7 <__do_global_dtors_aux+0x27>
    11db:	48 8b 3d 26 2e 00 00 	mov    0x2e26(%rip),%rdi        # 4008 <__dso_handle>
    11e2:	e8 b9 fe ff ff       	call   10a0 <__cxa_finalize@plt>
    11e7:	e8 64 ff ff ff       	call   1150 <deregister_tm_clones>
    11ec:	c6 05 85 30 00 00 01 	movb   $0x1,0x3085(%rip)        # 4278 <completed.8061>
    11f3:	5d                   	pop    %rbp
    11f4:	c3                   	ret    
    11f5:	0f 1f 00             	nopl   (%rax)
    11f8:	c3                   	ret    
    11f9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001200 <frame_dummy>:
    1200:	f3 0f 1e fa          	endbr64 
    1204:	e9 77 ff ff ff       	jmp    1180 <register_tm_clones>

0000000000001209 <main>:
    1209:	f3 0f 1e fa          	endbr64 
    120d:	55                   	push   %rbp
    120e:	48 89 e5             	mov    %rsp,%rbp
    1211:	48 83 ec 10          	sub    $0x10,%rsp
    1215:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    121c:	00 00 
    121e:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1222:	31 c0                	xor    %eax,%eax
    1224:	48 8d 35 e5 0d 00 00 	lea    0xde5(%rip),%rsi        # 2010 <_ZStL19piecewise_construct+0x8>
    122b:	48 8d 3d 0e 2e 00 00 	lea    0x2e0e(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    1232:	e8 99 fe ff ff       	call   10d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1237:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    123b:	48 89 c6             	mov    %rax,%rsi
    123e:	48 8d 3d 1b 2f 00 00 	lea    0x2f1b(%rip),%rdi        # 4160 <_ZSt3cin@@GLIBCXX_3.4>
    1245:	e8 66 fe ff ff       	call   10b0 <_ZNSirsERi@plt>
    124a:	8b 45 f0             	mov    -0x10(%rbp),%eax
    124d:	89 45 f4             	mov    %eax,-0xc(%rbp)
    1250:	83 7d f4 00          	cmpl   $0x0,-0xc(%rbp)
    1254:	74 3e                	je     1294 <main+0x8b>
    1256:	48 8d 35 d8 0d 00 00 	lea    0xdd8(%rip),%rsi        # 2035 <_ZStL19piecewise_construct+0x2d>
    125d:	48 8d 3d dc 2d 00 00 	lea    0x2ddc(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    1264:	e8 67 fe ff ff       	call   10d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1269:	48 89 c2             	mov    %rax,%rdx
    126c:	8b 45 f4             	mov    -0xc(%rbp),%eax
    126f:	89 c6                	mov    %eax,%esi
    1271:	48 89 d7             	mov    %rdx,%rdi
    1274:	e8 97 fe ff ff       	call   1110 <_ZNSolsEi@plt>
    1279:	48 89 c2             	mov    %rax,%rdx
    127c:	48 8b 05 4d 2d 00 00 	mov    0x2d4d(%rip),%rax        # 3fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    1283:	48 89 c6             	mov    %rax,%rsi
    1286:	48 89 d7             	mov    %rdx,%rdi
    1289:	e8 52 fe ff ff       	call   10e0 <_ZNSolsEPFRSoS_E@plt>
    128e:	83 6d f4 01          	subl   $0x1,-0xc(%rbp)
    1292:	eb bc                	jmp    1250 <main+0x47>
    1294:	48 8d 35 9f 0d 00 00 	lea    0xd9f(%rip),%rsi        # 203a <_ZStL19piecewise_construct+0x32>
    129b:	48 8d 3d 9e 2d 00 00 	lea    0x2d9e(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    12a2:	e8 29 fe ff ff       	call   10d0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    12a7:	48 89 c2             	mov    %rax,%rdx
    12aa:	8b 45 f4             	mov    -0xc(%rbp),%eax
    12ad:	89 c6                	mov    %eax,%esi
    12af:	48 89 d7             	mov    %rdx,%rdi
    12b2:	e8 59 fe ff ff       	call   1110 <_ZNSolsEi@plt>
    12b7:	48 89 c2             	mov    %rax,%rdx
    12ba:	48 8b 05 0f 2d 00 00 	mov    0x2d0f(%rip),%rax        # 3fd0 <_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GLIBCXX_3.4>
    12c1:	48 89 c6             	mov    %rax,%rsi
    12c4:	48 89 d7             	mov    %rdx,%rdi
    12c7:	e8 14 fe ff ff       	call   10e0 <_ZNSolsEPFRSoS_E@plt>
    12cc:	b8 00 00 00 00       	mov    $0x0,%eax
    12d1:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    12d5:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    12dc:	00 00 
    12de:	74 05                	je     12e5 <main+0xdc>
    12e0:	e8 0b fe ff ff       	call   10f0 <__stack_chk_fail@plt>
    12e5:	c9                   	leave  
    12e6:	c3                   	ret    

00000000000012e7 <_Z41__static_initialization_and_destruction_0ii>:
    12e7:	f3 0f 1e fa          	endbr64 
    12eb:	55                   	push   %rbp
    12ec:	48 89 e5             	mov    %rsp,%rbp
    12ef:	48 83 ec 10          	sub    $0x10,%rsp
    12f3:	89 7d fc             	mov    %edi,-0x4(%rbp)
    12f6:	89 75 f8             	mov    %esi,-0x8(%rbp)
    12f9:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    12fd:	75 32                	jne    1331 <_Z41__static_initialization_and_destruction_0ii+0x4a>
    12ff:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    1306:	75 29                	jne    1331 <_Z41__static_initialization_and_destruction_0ii+0x4a>
    1308:	48 8d 3d 6a 2f 00 00 	lea    0x2f6a(%rip),%rdi        # 4279 <_ZStL8__ioinit>
    130f:	e8 ec fd ff ff       	call   1100 <_ZNSt8ios_base4InitC1Ev@plt>
    1314:	48 8d 15 ed 2c 00 00 	lea    0x2ced(%rip),%rdx        # 4008 <__dso_handle>
    131b:	48 8d 35 57 2f 00 00 	lea    0x2f57(%rip),%rsi        # 4279 <_ZStL8__ioinit>
    1322:	48 8b 05 cf 2c 00 00 	mov    0x2ccf(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    1329:	48 89 c7             	mov    %rax,%rdi
    132c:	e8 8f fd ff ff       	call   10c0 <__cxa_atexit@plt>
    1331:	90                   	nop
    1332:	c9                   	leave  
    1333:	c3                   	ret    

0000000000001334 <_GLOBAL__sub_I_main>:
    1334:	f3 0f 1e fa          	endbr64 
    1338:	55                   	push   %rbp
    1339:	48 89 e5             	mov    %rsp,%rbp
    133c:	be ff ff 00 00       	mov    $0xffff,%esi
    1341:	bf 01 00 00 00       	mov    $0x1,%edi
    1346:	e8 9c ff ff ff       	call   12e7 <_Z41__static_initialization_and_destruction_0ii>
    134b:	5d                   	pop    %rbp
    134c:	c3                   	ret    
    134d:	0f 1f 00             	nopl   (%rax)

0000000000001350 <__libc_csu_init>:
    1350:	f3 0f 1e fa          	endbr64 
    1354:	41 57                	push   %r15
    1356:	4c 8d 3d 03 2a 00 00 	lea    0x2a03(%rip),%r15        # 3d60 <__frame_dummy_init_array_entry>
    135d:	41 56                	push   %r14
    135f:	49 89 d6             	mov    %rdx,%r14
    1362:	41 55                	push   %r13
    1364:	49 89 f5             	mov    %rsi,%r13
    1367:	41 54                	push   %r12
    1369:	41 89 fc             	mov    %edi,%r12d
    136c:	55                   	push   %rbp
    136d:	48 8d 2d fc 29 00 00 	lea    0x29fc(%rip),%rbp        # 3d70 <__do_global_dtors_aux_fini_array_entry>
    1374:	53                   	push   %rbx
    1375:	4c 29 fd             	sub    %r15,%rbp
    1378:	48 83 ec 08          	sub    $0x8,%rsp
    137c:	e8 7f fc ff ff       	call   1000 <_init>
    1381:	48 c1 fd 03          	sar    $0x3,%rbp
    1385:	74 1f                	je     13a6 <__libc_csu_init+0x56>
    1387:	31 db                	xor    %ebx,%ebx
    1389:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1390:	4c 89 f2             	mov    %r14,%rdx
    1393:	4c 89 ee             	mov    %r13,%rsi
    1396:	44 89 e7             	mov    %r12d,%edi
    1399:	41 ff 14 df          	call   *(%r15,%rbx,8)
    139d:	48 83 c3 01          	add    $0x1,%rbx
    13a1:	48 39 dd             	cmp    %rbx,%rbp
    13a4:	75 ea                	jne    1390 <__libc_csu_init+0x40>
    13a6:	48 83 c4 08          	add    $0x8,%rsp
    13aa:	5b                   	pop    %rbx
    13ab:	5d                   	pop    %rbp
    13ac:	41 5c                	pop    %r12
    13ae:	41 5d                	pop    %r13
    13b0:	41 5e                	pop    %r14
    13b2:	41 5f                	pop    %r15
    13b4:	c3                   	ret    
    13b5:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    13bc:	00 00 00 00 

00000000000013c0 <__libc_csu_fini>:
    13c0:	f3 0f 1e fa          	endbr64 
    13c4:	c3                   	ret    

Disassembly of section .fini:

00000000000013c8 <_fini>:
    13c8:	f3 0f 1e fa          	endbr64 
    13cc:	48 83 ec 08          	sub    $0x8,%rsp
    13d0:	48 83 c4 08          	add    $0x8,%rsp
    13d4:	c3                   	ret    
