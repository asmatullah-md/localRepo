let todoList = [];
displayItems();

function addTodo(){
    let inputElement = document.querySelector('#todo-input');
    let todoItem = inputElement.Value;
    todoList.push(todoItem);
    inputElement.Value = '';

    displayItems();
}

function displayItems(){
    let displayElement = document.querySelector('#todo-items');
    displayElement.innerText = '';
    for(let i=0; i < todoList.length; i++){
        displayElement.innerText += displayElement.innerText + "\n" + todoList[i];
    }
}