import { useEffect, useState } from "react";

function ApplianceDetail({ id, onBack }) {
  const [appliance, setAppliance] = useState(null);
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    fetch(`http://localhost:8000/eletro/${id}`)
      .then((res) => res.json())
      .then((data) => {
        setAppliance(data);
        setLoading(false);
      })
      .catch((err) => {
        console.error("Erro ao buscar detalhe:", err);
        setLoading(false);
      });
  }, [id]);

  if (loading) return <p>Carregando...</p>;
  if (!appliance) return <p>Não encontrado.</p>;

  return (
    <div>
      <button onClick={onBack} style={{ marginBottom: "10px" }}>
        Voltar
      </button>
      <h2>{appliance.descricao}</h2>
      <p><strong>Tipo:</strong> {appliance.tipo}</p>
      <p><strong>Modelo:</strong> {appliance.modelo}</p>
      <p><strong>Preço:</strong> R$ {appliance.preco}</p>
      <p><strong>Descrição:</strong> {appliance.descricao}</p>
    </div>
  );
}

export default ApplianceDetail;
