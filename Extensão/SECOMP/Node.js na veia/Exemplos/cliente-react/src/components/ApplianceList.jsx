import { useEffect, useState } from "react";
import ApplianceItem from "./ApplianceItem";

function ApplianceList({ onSelect, onEdit }) {
  const [appliances, setAppliances] = useState([]);
  const [loading, setLoading] = useState(true);

  useEffect(() => {
    fetch("http://localhost:8000/eletro")
      .then((res) => res.json())
      .then((data) => {
        setAppliances(data);
        setLoading(false);
      })
      .catch((err) => {
        console.error("Erro ao buscar lista:", err);
        setLoading(false);
      });
  }, []);

  if (loading) return <p>Carregando...</p>;

  return (
    <ul style={{ listStyle: "none", padding: 0 }}>
      {appliances.map((item) => (
        <ApplianceItem 
          key={item.id} 
          item={item} 
          onClick={() => onSelect(item.id)} 
          onEdit={() => onEdit(item.id)}
        />
      ))}
    </ul>
  );
}

export default ApplianceList;
