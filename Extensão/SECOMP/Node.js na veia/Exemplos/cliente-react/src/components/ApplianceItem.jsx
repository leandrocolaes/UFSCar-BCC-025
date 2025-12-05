function ApplianceItem({ item, onClick, onEdit }) {
    return (
      <li
        style={{
          border: "1px solid #ccc",
          padding: "10px",
          marginBottom: "8px",
          borderRadius: "6px",
          display: "flex",
          justifyContent: "space-between",
          alignItems: "center",
        }}
      >
        <div onClick={onClick} style={{ cursor: "pointer" }}>
          <strong>{item.descricao}</strong>
          <div>Preço: R$ {item.preco}</div>
        </div>
        <button 
          onClick={(e) => { 
            e.stopPropagation(); 
            onEdit(); 
          }}
        >
          Editar
        </button>
      </li>
    );
  }
  
  export default ApplianceItem;
  