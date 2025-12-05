
const express = require("express");
const app = express();
const porta = 8000;

function f1(req, res, next){
    console.log("Tratamento inicial");
    next();
}

function f2(req, res, next){
    console.log("respondendo");
    res.status(200).send("resposta...");
}

app.get("/", [f1,f2]);


/*
//todas as requisições passarão por aqui
app.use((req, res, next)=>{
    console.log(`recebendo requisição de ${req.ip}`);
    next();
})

app.get("/", (req, res, next)=>{
    res.status(200).send("respondendo");
})
//outros tratamentos normais
*/


app.listen(porta);
