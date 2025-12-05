const express = require("express");
const app = express();
const PORTA = 8000; //ENTRE 1 e 65535. Na prática, > 10000

let listaEletro = require("./listaEletro");

const bodyParser = require("body-parser");

const cors = require("cors");

app.use(cors());

//faz com que todas as requisições tenham o corpo JSON formatado
app.use(bodyParser.json());


//cadastrar
app.post("/eletro", (req, res) => {

    let novoId = (Math.floor(Math.random() * 99999)) + 10;
    let novoEletro = {
        id: novoId,
        tipo: req.body.tipo,
        modelo: req.body.modelo,
        descricao: req.body.descricao,
        preco: req.body.preco
    }
    console.log(`cadastrando ${novoEletro.modelo}`);

    listaEletro.push(novoEletro);

    res.json(`${novoEletro.modelo} cadastrado com sucesso`);
})

//atualizar
app.put("/eletro/:id", (req, res) => {
    let idProduto = req.params.id;
    let produto = listaEletro.find((produto) => {
        if (produto.id == idProduto) {
            return produto;
        }
    })
    if (produto) {
        //como estamos guardando os dados num array, acabamos alterando o original ao recuperar a referência
        //Em casos normais, precisaríamos atualizar o BD
        produto.modelo = req.body.modelo;
        produto.descricao = req.body.descricao;
        produto.tipo = req.body.tipo;
        produto.preco = req.body.preco;

        res.status(200).send("produto atualizado");
    } else {
        //não encontrou o produto
        res.status(404).send("Produto não encontrado");
    }

})

//por id
app.get("/eletro/:id",
    (req, res, next) => {
        let idProduto = req.params.id;
        let filtrados = listaEletro.filter((eletro) => {
            return eletro.id == idProduto;
        })

        res.json(filtrados[0]);

    })

//por categoria
app.get("/eletro/:categoria",
    (req, res, next) => {
        let categoria = req.params.categoria;
        let filtrados = listaEletro.filter((eletro) => {
            return eletro.tipo == categoria;
        })

        res.json(filtrados);

    })


//busca detalhada

app.get("/eletro", (req, res) => {
    let categoria = req.query.categoria;
    let precoMin = req.query.precoMin;
    let precoMax = req.query.precoMax;

    let filtrados = listaEletro.filter((eletro) => {
        return (eletro.tipo == categoria || categoria == undefined) &&
            (eletro.preco >= precoMin || precoMin == undefined) && (eletro.preco <= precoMax || precoMax == undefined)
    })

    res.json(filtrados);
})


app.listen(
    PORTA,
    () => { console.log(`Servidor na porta ${PORTA}`); }
);