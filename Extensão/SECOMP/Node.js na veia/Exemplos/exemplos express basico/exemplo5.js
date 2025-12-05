
const express = require("express");
const app = express();
const porta = 8000;

app.use("/", (req, res, next)=>{
    console.log("use /");
    next();
})

app.use("/teste", (req, res, next)=>{
    console.log("use /teste");
    next();
})

app.all("/", (req, res, next)=>{
    console.log("all /");
    next();
})

app.all("/teste", (req, res, next)=>{
    console.log("all /teste");
    next();
})

app.get("/", (req, res, next)=>{
    console.log("get /");
    next();
})

app.get("/teste", (req, res, next)=>{
    console.log("get /teste");
    next();
})

app.get("/teste/proximo", (req, res, next)=>{
    console.log("get /teste/proximo");
    next();
})

app.listen(porta);
