
const express = require("express");
const app = express();
const porta = 8000;

app.get("/:campus/cursos", (req, res, next)=>{ 
	res.status(200).send('
			cursos do campos
		');
});


app.listen(porta);
//envia a mensagem oi

