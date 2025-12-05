---
date: "2025-09-19"
week: "2025-W38"
type: note
---
[[POO-P1]]
[[C - Programming Language]]
[[POO-A5.1.cpp]]
[[POO-LI1.1.cpp]]
Usar o NEW no lugar de malloc. Se usou o NEW tem que usar o Malloc
### NEW X Malloc
Malloc reservava 
```C++
HoraPtr = new Hora;
new
```
Não precisava contar o tamanho
Automaticamente sabe o tipo
Não se deve usar Malloc em orientação de objeto
### O destrutor
O destrutor só é usado quando for utilizado algo depois de ser destruido
### This
Ponteiro dentro do objeto, usado quando a variavel privada é a mesma que o parâmetro