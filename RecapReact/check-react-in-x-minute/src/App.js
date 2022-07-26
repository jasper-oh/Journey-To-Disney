import React, {useState} from "react";
import TodoList from "./TodoList";

function App() {
  const [todos, setTodos] = useState(["Todo1" , "Todo2"])
  //object destructuring (?)
  return (
    <>
      <TodoList todos = {todos} />
      <input type="text"/>
      <button>Add todo</button>
      <button>Clear Completed</button>
      <div>0 left todo</div>
    </>

  )
}

export default App;
