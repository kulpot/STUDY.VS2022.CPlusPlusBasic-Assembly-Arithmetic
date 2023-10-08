
.586
.model flat, c
.stack 100h
.data

.code

doit proc

	; this is a comment i can type whatever i like after a semicolon and assembler will ignore it
	; 8 + 4 - 2 + 3 = 13

	mov eax, 8
	mov ebx, 4
	mov ecx, 2
	mov edx, 3

	add ebx, eax
	sub ebx, ecx
	add edx, ebx

	;mov eax, 8
	;mov ebx, eax

doit endp

end