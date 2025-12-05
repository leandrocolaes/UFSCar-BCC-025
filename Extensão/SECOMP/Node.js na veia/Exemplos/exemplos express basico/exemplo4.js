
const express = require("express");
const app = express();
const porta = 8000;

app.get("/aluno", (req, res, next)=>{ 
	console.log(`requisição chegando de ${req.ip}`);
    next();
});

app.get("/aluno/", (req, res, next)=>{ 
    //sem o parâmetro, retornamos uma lista de alunos
    res.status(200).json([
        {nome: "Danilo"},
        {nome: "Yuki"},
        {nome: "Hélio"},
        {nome: "..."},
    ])
});



app.listen(porta);


