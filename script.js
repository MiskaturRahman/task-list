//define UI element
let form = document.querySelector('#task-form');
let taskList = document.querySelector('ul');
let clearBtn = document.querySelector('#clear-task');
let filter = document.querySelector('#task-filter');
let taskInput = document.querySelector('#new-task');

//define listeners
form.addEventListener('submit', addTask);


//define function
function addTask(e) {
    if (taskInput.value === '') {
        alert('Please enter a task');
    }
    else {
        //li element create
        let li = document.createElement('li');
        li.appendChild(document.createTextNode(taskInput.value + " "));
        taskList.appendChild(li);
        let link = document.createElement('a');
        link.setAttribute('href', '#');
        link.innerHTML = 'x';
        li.appendChild(link);
        taskList.appendChild(li);
        taskInput.value = '';

    }
    e.preventDefault();
}