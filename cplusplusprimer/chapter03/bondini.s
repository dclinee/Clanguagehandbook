
bondini:     file format elf64-x86-64


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
    1020:	ff 35 6a 2f 00 00    	push   0x2f6a(%rip)        # 3f90 <_GLOBAL_OFFSET_TABLE_+0x8>
    1026:	f2 ff 25 6b 2f 00 00 	bnd jmp *0x2f6b(%rip)        # 3f98 <_GLOBAL_OFFSET_TABLE_+0x10>
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

Disassembly of section .plt.got:

0000000000001090 <__cxa_finalize@plt>:
    1090:	f3 0f 1e fa          	endbr64 
    1094:	f2 ff 25 35 2f 00 00 	bnd jmp *0x2f35(%rip)        # 3fd0 <__cxa_finalize@GLIBC_2.2.5>
    109b:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .plt.sec:

00000000000010a0 <_ZNSirsERl@plt>:
    10a0:	f3 0f 1e fa          	endbr64 
    10a4:	f2 ff 25 f5 2e 00 00 	bnd jmp *0x2ef5(%rip)        # 3fa0 <_ZNSirsERl@GLIBCXX_3.4>
    10ab:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010b0 <__cxa_atexit@plt>:
    10b0:	f3 0f 1e fa          	endbr64 
    10b4:	f2 ff 25 ed 2e 00 00 	bnd jmp *0x2eed(%rip)        # 3fa8 <__cxa_atexit@GLIBC_2.2.5>
    10bb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>:
    10c0:	f3 0f 1e fa          	endbr64 
    10c4:	f2 ff 25 e5 2e 00 00 	bnd jmp *0x2ee5(%rip)        # 3fb0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@GLIBCXX_3.4>
    10cb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010d0 <__stack_chk_fail@plt>:
    10d0:	f3 0f 1e fa          	endbr64 
    10d4:	f2 ff 25 dd 2e 00 00 	bnd jmp *0x2edd(%rip)        # 3fb8 <__stack_chk_fail@GLIBC_2.4>
    10db:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010e0 <_ZNSt8ios_base4InitC1Ev@plt>:
    10e0:	f3 0f 1e fa          	endbr64 
    10e4:	f2 ff 25 d5 2e 00 00 	bnd jmp *0x2ed5(%rip)        # 3fc0 <_ZNSt8ios_base4InitC1Ev@GLIBCXX_3.4>
    10eb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

00000000000010f0 <_ZNSolsEl@plt>:
    10f0:	f3 0f 1e fa          	endbr64 
    10f4:	f2 ff 25 cd 2e 00 00 	bnd jmp *0x2ecd(%rip)        # 3fc8 <_ZNSolsEl@GLIBCXX_3.4>
    10fb:	0f 1f 44 00 00       	nopl   0x0(%rax,%rax,1)

Disassembly of section .text:

0000000000001100 <_start>:
    1100:	f3 0f 1e fa          	endbr64 
    1104:	31 ed                	xor    %ebp,%ebp
    1106:	49 89 d1             	mov    %rdx,%r9
    1109:	5e                   	pop    %rsi
    110a:	48 89 e2             	mov    %rsp,%rdx
    110d:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
    1111:	50                   	push   %rax
    1112:	54                   	push   %rsp
    1113:	4c 8d 05 66 02 00 00 	lea    0x266(%rip),%r8        # 1380 <__libc_csu_fini>
    111a:	48 8d 0d ef 01 00 00 	lea    0x1ef(%rip),%rcx        # 1310 <__libc_csu_init>
    1121:	48 8d 3d c1 00 00 00 	lea    0xc1(%rip),%rdi        # 11e9 <main>
    1128:	ff 15 b2 2e 00 00    	call   *0x2eb2(%rip)        # 3fe0 <__libc_start_main@GLIBC_2.2.5>
    112e:	f4                   	hlt    
    112f:	90                   	nop

0000000000001130 <deregister_tm_clones>:
    1130:	48 8d 3d d9 2e 00 00 	lea    0x2ed9(%rip),%rdi        # 4010 <__TMC_END__>
    1137:	48 8d 05 d2 2e 00 00 	lea    0x2ed2(%rip),%rax        # 4010 <__TMC_END__>
    113e:	48 39 f8             	cmp    %rdi,%rax
    1141:	74 15                	je     1158 <deregister_tm_clones+0x28>
    1143:	48 8b 05 8e 2e 00 00 	mov    0x2e8e(%rip),%rax        # 3fd8 <_ITM_deregisterTMCloneTable@Base>
    114a:	48 85 c0             	test   %rax,%rax
    114d:	74 09                	je     1158 <deregister_tm_clones+0x28>
    114f:	ff e0                	jmp    *%rax
    1151:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1158:	c3                   	ret    
    1159:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

0000000000001160 <register_tm_clones>:
    1160:	48 8d 3d a9 2e 00 00 	lea    0x2ea9(%rip),%rdi        # 4010 <__TMC_END__>
    1167:	48 8d 35 a2 2e 00 00 	lea    0x2ea2(%rip),%rsi        # 4010 <__TMC_END__>
    116e:	48 29 fe             	sub    %rdi,%rsi
    1171:	48 89 f0             	mov    %rsi,%rax
    1174:	48 c1 ee 3f          	shr    $0x3f,%rsi
    1178:	48 c1 f8 03          	sar    $0x3,%rax
    117c:	48 01 c6             	add    %rax,%rsi
    117f:	48 d1 fe             	sar    %rsi
    1182:	74 14                	je     1198 <register_tm_clones+0x38>
    1184:	48 8b 05 65 2e 00 00 	mov    0x2e65(%rip),%rax        # 3ff0 <_ITM_registerTMCloneTable@Base>
    118b:	48 85 c0             	test   %rax,%rax
    118e:	74 08                	je     1198 <register_tm_clones+0x38>
    1190:	ff e0                	jmp    *%rax
    1192:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)
    1198:	c3                   	ret    
    1199:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011a0 <__do_global_dtors_aux>:
    11a0:	f3 0f 1e fa          	endbr64 
    11a4:	80 3d cd 30 00 00 00 	cmpb   $0x0,0x30cd(%rip)        # 4278 <completed.8061>
    11ab:	75 2b                	jne    11d8 <__do_global_dtors_aux+0x38>
    11ad:	55                   	push   %rbp
    11ae:	48 83 3d 1a 2e 00 00 	cmpq   $0x0,0x2e1a(%rip)        # 3fd0 <__cxa_finalize@GLIBC_2.2.5>
    11b5:	00 
    11b6:	48 89 e5             	mov    %rsp,%rbp
    11b9:	74 0c                	je     11c7 <__do_global_dtors_aux+0x27>
    11bb:	48 8b 3d 46 2e 00 00 	mov    0x2e46(%rip),%rdi        # 4008 <__dso_handle>
    11c2:	e8 c9 fe ff ff       	call   1090 <__cxa_finalize@plt>
    11c7:	e8 64 ff ff ff       	call   1130 <deregister_tm_clones>
    11cc:	c6 05 a5 30 00 00 01 	movb   $0x1,0x30a5(%rip)        # 4278 <completed.8061>
    11d3:	5d                   	pop    %rbp
    11d4:	c3                   	ret    
    11d5:	0f 1f 00             	nopl   (%rax)
    11d8:	c3                   	ret    
    11d9:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)

00000000000011e0 <frame_dummy>:
    11e0:	f3 0f 1e fa          	endbr64 
    11e4:	e9 77 ff ff ff       	jmp    1160 <register_tm_clones>

00000000000011e9 <main>:
    11e9:	f3 0f 1e fa          	endbr64 
    11ed:	55                   	push   %rbp
    11ee:	48 89 e5             	mov    %rsp,%rbp
    11f1:	48 83 ec 10          	sub    $0x10,%rsp
    11f5:	64 48 8b 04 25 28 00 	mov    %fs:0x28,%rax
    11fc:	00 00 
    11fe:	48 89 45 f8          	mov    %rax,-0x8(%rbp)
    1202:	31 c0                	xor    %eax,%eax
    1204:	48 8d 35 05 0e 00 00 	lea    0xe05(%rip),%rsi        # 2010 <_ZStL19piecewise_construct+0x8>
    120b:	48 8d 3d 2e 2e 00 00 	lea    0x2e2e(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    1212:	e8 a9 fe ff ff       	call   10c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1217:	48 8d 35 22 0e 00 00 	lea    0xe22(%rip),%rsi        # 2040 <_ZStL19piecewise_construct+0x38>
    121e:	48 8d 3d 1b 2e 00 00 	lea    0x2e1b(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    1225:	e8 96 fe ff ff       	call   10c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    122a:	48 8d 45 f0          	lea    -0x10(%rbp),%rax
    122e:	48 89 c6             	mov    %rax,%rsi
    1231:	48 8d 3d 28 2f 00 00 	lea    0x2f28(%rip),%rdi        # 4160 <_ZSt3cin@@GLIBCXX_3.4>
    1238:	e8 63 fe ff ff       	call   10a0 <_ZNSirsERl@plt>
    123d:	48 8d 35 23 0e 00 00 	lea    0xe23(%rip),%rsi        # 2067 <_ZStL19piecewise_construct+0x5f>
    1244:	48 8d 3d f5 2d 00 00 	lea    0x2df5(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    124b:	e8 70 fe ff ff       	call   10c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1250:	48 89 c2             	mov    %rax,%rdx
    1253:	48 8b 45 f0          	mov    -0x10(%rbp),%rax
    1257:	48 89 c6             	mov    %rax,%rsi
    125a:	48 89 d7             	mov    %rdx,%rdi
    125d:	e8 8e fe ff ff       	call   10f0 <_ZNSolsEl@plt>
    1262:	48 8d 35 0c 0e 00 00 	lea    0xe0c(%rip),%rsi        # 2075 <_ZStL19piecewise_construct+0x6d>
    1269:	48 89 c7             	mov    %rax,%rdi
    126c:	e8 4f fe ff ff       	call   10c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1271:	48 8d 35 08 0e 00 00 	lea    0xe08(%rip),%rsi        # 2080 <_ZStL19piecewise_construct+0x78>
    1278:	48 8d 3d c1 2d 00 00 	lea    0x2dc1(%rip),%rdi        # 4040 <_ZSt4cout@@GLIBCXX_3.4>
    127f:	e8 3c fe ff ff       	call   10c0 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@plt>
    1284:	b8 00 00 00 00       	mov    $0x0,%eax
    1289:	48 8b 4d f8          	mov    -0x8(%rbp),%rcx
    128d:	64 48 33 0c 25 28 00 	xor    %fs:0x28,%rcx
    1294:	00 00 
    1296:	74 05                	je     129d <main+0xb4>
    1298:	e8 33 fe ff ff       	call   10d0 <__stack_chk_fail@plt>
    129d:	c9                   	leave  
    129e:	c3                   	ret    

000000000000129f <_Z41__static_initialization_and_destruction_0ii>:
    129f:	f3 0f 1e fa          	endbr64 
    12a3:	55                   	push   %rbp
    12a4:	48 89 e5             	mov    %rsp,%rbp
    12a7:	48 83 ec 10          	sub    $0x10,%rsp
    12ab:	89 7d fc             	mov    %edi,-0x4(%rbp)
    12ae:	89 75 f8             	mov    %esi,-0x8(%rbp)
    12b1:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
    12b5:	75 32                	jne    12e9 <_Z41__static_initialization_and_destruction_0ii+0x4a>
    12b7:	81 7d f8 ff ff 00 00 	cmpl   $0xffff,-0x8(%rbp)
    12be:	75 29                	jne    12e9 <_Z41__static_initialization_and_destruction_0ii+0x4a>
    12c0:	48 8d 3d b2 2f 00 00 	lea    0x2fb2(%rip),%rdi        # 4279 <_ZStL8__ioinit>
    12c7:	e8 14 fe ff ff       	call   10e0 <_ZNSt8ios_base4InitC1Ev@plt>
    12cc:	48 8d 15 35 2d 00 00 	lea    0x2d35(%rip),%rdx        # 4008 <__dso_handle>
    12d3:	48 8d 35 9f 2f 00 00 	lea    0x2f9f(%rip),%rsi        # 4279 <_ZStL8__ioinit>
    12da:	48 8b 05 17 2d 00 00 	mov    0x2d17(%rip),%rax        # 3ff8 <_ZNSt8ios_base4InitD1Ev@GLIBCXX_3.4>
    12e1:	48 89 c7             	mov    %rax,%rdi
    12e4:	e8 c7 fd ff ff       	call   10b0 <__cxa_atexit@plt>
    12e9:	90                   	nop
    12ea:	c9                   	leave  
    12eb:	c3                   	ret    

00000000000012ec <_GLOBAL__sub_I_main>:
    12ec:	f3 0f 1e fa          	endbr64 
    12f0:	55                   	push   %rbp
    12f1:	48 89 e5             	mov    %rsp,%rbp
    12f4:	be ff ff 00 00       	mov    $0xffff,%esi
    12f9:	bf 01 00 00 00       	mov    $0x1,%edi
    12fe:	e8 9c ff ff ff       	call   129f <_Z41__static_initialization_and_destruction_0ii>
    1303:	5d                   	pop    %rbp
    1304:	c3                   	ret    
    1305:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
    130c:	00 00 00 
    130f:	90                   	nop

0000000000001310 <__libc_csu_init>:
    1310:	f3 0f 1e fa          	endbr64 
    1314:	41 57                	push   %r15
    1316:	4c 8d 3d 53 2a 00 00 	lea    0x2a53(%rip),%r15        # 3d70 <__frame_dummy_init_array_entry>
    131d:	41 56                	push   %r14
    131f:	49 89 d6             	mov    %rdx,%r14
    1322:	41 55                	push   %r13
    1324:	49 89 f5             	mov    %rsi,%r13
    1327:	41 54                	push   %r12
    1329:	41 89 fc             	mov    %edi,%r12d
    132c:	55                   	push   %rbp
    132d:	48 8d 2d 4c 2a 00 00 	lea    0x2a4c(%rip),%rbp        # 3d80 <__do_global_dtors_aux_fini_array_entry>
    1334:	53                   	push   %rbx
    1335:	4c 29 fd             	sub    %r15,%rbp
    1338:	48 83 ec 08          	sub    $0x8,%rsp
    133c:	e8 bf fc ff ff       	call   1000 <_init>
    1341:	48 c1 fd 03          	sar    $0x3,%rbp
    1345:	74 1f                	je     1366 <__libc_csu_init+0x56>
    1347:	31 db                	xor    %ebx,%ebx
    1349:	0f 1f 80 00 00 00 00 	nopl   0x0(%rax)
    1350:	4c 89 f2             	mov    %r14,%rdx
    1353:	4c 89 ee             	mov    %r13,%rsi
    1356:	44 89 e7             	mov    %r12d,%edi
    1359:	41 ff 14 df          	call   *(%r15,%rbx,8)
    135d:	48 83 c3 01          	add    $0x1,%rbx
    1361:	48 39 dd             	cmp    %rbx,%rbp
    1364:	75 ea                	jne    1350 <__libc_csu_init+0x40>
    1366:	48 83 c4 08          	add    $0x8,%rsp
    136a:	5b                   	pop    %rbx
    136b:	5d                   	pop    %rbp
    136c:	41 5c                	pop    %r12
    136e:	41 5d                	pop    %r13
    1370:	41 5e                	pop    %r14
    1372:	41 5f                	pop    %r15
    1374:	c3                   	ret    
    1375:	66 66 2e 0f 1f 84 00 	data16 cs nopw 0x0(%rax,%rax,1)
    137c:	00 00 00 00 

0000000000001380 <__libc_csu_fini>:
    1380:	f3 0f 1e fa          	endbr64 
    1384:	c3                   	ret    

Disassembly of section .fini:

0000000000001388 <_fini>:
    1388:	f3 0f 1e fa          	endbr64 
    138c:	48 83 ec 08          	sub    $0x8,%rsp
    1390:	48 83 c4 08          	add    $0x8,%rsp
    1394:	c3                   	ret    
