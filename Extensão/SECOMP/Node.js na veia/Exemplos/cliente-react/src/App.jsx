import { useState } from "react";
import ApplianceList from "./components/ApplianceList";
import ApplianceDetail from "./components/ApplianceDetail";
import ApplianceEdit from "./components/ApplianceEdit";
import ApplianceCreate from "./components/ApplianceCreate";

function App() {
  const [selectedId, setSelectedId] = useState(null);
  const [editId, setEditId] = useState(null);
  const [showCreate, setShowCreate] = useState(false);

  return (
    <div style={{ padding: "20px", fontFamily: "Arial, sans-serif" }}>
      <h1>Lista de Eletrodomésticos</h1>

      {!selectedId && (
        <button 
          onClick={() => setShowCreate(true)} 
          style={{ marginBottom: "15px" }}
        >
          Cadastrar Novo
        </button>
      )}

      {selectedId ? (
        <ApplianceDetail id={selectedId} onBack={() => setSelectedId(null)} />
      ) : (
        <ApplianceList 
          onSelect={setSelectedId} 
          onEdit={setEditId} 
        />
      )}

      {editId && (
        <ApplianceEdit 
          id={editId} 
          onClose={() => setEditId(null)} 
        />
      )}

      {showCreate && (
        <ApplianceCreate 
          onClose={() => setShowCreate(false)} 
        />
      )}
    </div>
  );
}

export default App;
