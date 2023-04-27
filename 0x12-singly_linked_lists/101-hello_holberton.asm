	global main
	extern printf
main:
	mov edi, text
	xor eax, eax
	call printf
	mov   eax, 10
	ret
text: db 'Hello, Holberton',10
