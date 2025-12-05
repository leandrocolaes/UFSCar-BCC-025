---
date: 2025-08-21
week: W34-2025
type: note
---
**RISC()** = 
	Poucas instruções
	
**CISC(x86)** = 
		Intruções complexas
		Divide em tarefas menores e faz um RISC

https://www.riscvschool.com/risc-v-simulators/
Eremos usar: rars e emulsiv

simular: resultado final
emular: passos intermediarios

syscall write 
	a7, 64 -> syscall write
	a0, 1 ->por default 1
	a1 , msg ->  endereço da string([[Ponteiro]])
	li a2, 7 -> tamanho
	#####
	li a0, 0 -> valor do retorno

echo $? :Informa o retorno

make write
file **



```
git add hello.s
git commit -m "R1"
git push 
```

![[Pasted image 20250821104516.png]] 

view 