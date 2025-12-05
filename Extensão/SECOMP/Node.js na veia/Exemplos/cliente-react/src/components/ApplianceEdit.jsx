import { useEffect, useState } from "react";

function ApplianceEdit({ id, onClose }) {
  const [form, setForm] = useState({
    tipo: "",
    modelo: "",
    preco: "",
    descricao: "",
  });
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    fetch(`http://localhost:8000/eletro/${id}`)
      .then((res) => res.json())
      .then((data) => {
        setForm({
          tipo: data.tipo,
          modelo: data.modelo,
          preco: data.preco,
          descricao: data.descricao,
        });
        setLoading(false);
      })
      .catch((err) => {
        console.error("Erro ao carregar produto:", err);
        setLoading(false);
      });
  }, [id]);

  const handleChange = (e) => {
    setForm({ ...form, [e.target.name]: e.target.value });
  };

  const handleSave = () => {
    fetch(`http://localhost:8000/eletro/${id}`, {
      method: "PUT",
      headers: { "Content-Type": "application/json" },
      body: JSON.stringify(form),
    })
      .then((res) => {
        if (!res.ok) throw new Error("Erro ao salvar");
        alert("Produto atualizado com sucesso!");
        onClose();
      })
      .catch((err) => {
        console.error(err);
        alert("Erro ao atualizar produto");
      });
  };

  if (loading) return null;

  return (
    <div className="modal-overlay">
      <div className="modal">
        <h2>Editar Produto</h2>
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

export default ApplianceEdit;
