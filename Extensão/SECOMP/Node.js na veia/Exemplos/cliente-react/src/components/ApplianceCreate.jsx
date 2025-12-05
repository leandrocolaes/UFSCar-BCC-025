import { useState } from "react";

function ApplianceCreate({ onClose }) {
  const [form, setForm] = useState({
    tipo: "",
    modelo: "",
    preco: "",
    descricao: "",
  });

  const handleChange = (e) => {
    setForm({ ...form, [e.target.name]: e.target.value });
  };

  const handleSave = () => {
    fetch("http://localhost:8000/eletro", {
      method: "POST",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(form), // id não vai
    })
      .then((res) => {
        if (!res.ok) throw new Error("Erro ao cadastrar");
        return res.json();
      })
      .then(() => {
        alert("Produto cadastrado com sucesso!");
        onClose();
      })
      .catch((err) => {
        console.error(err);
        alert("Erro ao cadastrar produto");
      });
  };

  return (
    <div className="modal-overlay">
      <div className="modal">
        <h2>Novo Produto</h2>

        <label>Tipo:</label>
        <input 
          name="tipo" 
          value={form.tipo} 
          onChange={handleChange} 
          style={{ width: "100%", marginBottom: "8px" }}
        />

        <label>Modelo:</label>
        <input 
          name="modelo" 
          value={form.modelo} 
          onChange={handleChange} 
          style={{ width: "100%", marginBottom: "8px" }}
        />

        <label>Preço:</label>
        <input 
          name="preco" 
          type="number"
          step="0.01"
          value={form.preco} 
          onChange={handleChange} 
          style={{ width: "100%", marginBottom: "8px" }}
        />

        <label>Descrição:</label>
        <textarea 
          name="descricao" 
          value={form.descricao} 
          onChange={handleChange} 
          style={{ width: "100%", marginBottom: "8px" }}
        />

        <div style={{ display: "flex", justifyContent: "space-between" }}>
          <button onClick={handleSave}>Salvar</button>
          <button onClick={onClose}>Cancelar</button>
        </div>
      </div>
    </div>
  );
}

export default ApplianceCreate;
