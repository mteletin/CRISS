CLtranslate:
	.DB 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f
	.DB 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f
	.DB 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f
	.DB 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f
	.DB 0x40, 'a',  'b',  'c',  'd',  'e',  'f',  'g',  'h',  'i',  'j',  'k',  'l',  'm',  'n',  'o'  
	.DB 'p' , 'q',  'r',  's',  't',  'u',  'v',  'w',  'x',  'y',  'z',  0x5b, 0x5c, 0x5d, 0x5e, 0x5f 
	.DB 0x60, 'A',  'B',  'C',  'D',  'E',  'F',  'G',  'H',  'I',  'J',  'K',  'L',  'M',  'N',  'O'  
	.DB 'P' , 'Q',  'R',  'S',  'T',  'U',  'V',  'W',  'X',  'Y',  'Z',  0x7b, 0x7c, 0x7d, 0x7e, 0x7f
	  
	.DB '�' , '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�'  
	.DB '�' , '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�'  
	.DB '�' , '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�'  
	.DB 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf
	.DB 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf
	.DB 0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf
	.DB '�' , '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�',  '�'  
	.DB '�' , '�' , 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, 0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff

; e0 subcodes decoding table  0x69 - 0x7D
;	[END], *, [Left], [Home], *, *, *, [INS], [DEL], [Down], *, [Right], [Up], *, *, *, *, [PgDown], *, *, [PgUp], dummy for alignment
e0decode:
	.DB 0x5c, 0x6a, 0x5e, 0x5f, 0x6d, 0x6e, 0x6f, 0x60, 0x61, 0x62, 0x73, 0x63, 0x64, 0x76, 0x77, 0x78, 0x79, 0x65, 0x7b, 0x7c, 0x67, 0x00
