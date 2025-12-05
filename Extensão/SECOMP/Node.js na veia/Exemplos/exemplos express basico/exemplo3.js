
const express = require("express");
const app = express();
const porta = 8000;

app.get("/", (req, res, next)=>{ 
	res.status(200).send("oi /");
});

app.get("/curso", (req, res, next)=>{ 
	res.status(200).send("oi curso");
});

app.post("/aluno", (req, res, next)=>{ 
	res.status(200).send("ToDo: Implementar o cadastro de aluno");
});

app.get("/aluno/:id", (req, res, next)=>{ 
    let aluno = req.params.id;
	res.status(200).send(`Dados do aluno ${aluno}`);
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


