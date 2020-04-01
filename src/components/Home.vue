<template>
 
 <div class="container">
    <div class="hello">
    <div class="holder">
         <h1>Add a Public ToDo</h1>
<form @submit.prevent="addtodo">
    <input type="text" placeholder="What do you want to add?" v-model="todo">
     
</form>
<ul>
  <transition-group name="list" enter-active-class="animated bounceInUp" leave-active-class="animated bounceOutDown">
    <li v-for="(data,index) in todos" :key="index">{{ data.todo }}
      <i class="fa fa-minus-circle" v-on:click="removetodo(index)"></i>
    </li>
  </transition-group></ul>      
    <p>These are the things you need to do!</p>
  </div></div></div>
</template>

<script>
import auth from '../auth'

export default {


 name: 'Todos',
 data(){
   return {
     todo: '',
     todos: [
      { "todo":"Vue.js"},

     ]
   }
 },
  methods: {
    addtodo(){
      this.todos.push({todo: this.todo})
      this.todo= '',
      alert("New ToDo added!!!");
    },
    removetodo(id){
      this.todos.splice(id,1);
      alert(" ToDo removed!!!");
    }
  }

}
</script>

<!-- Add "scoped" attribute to limit CSS to this component only -->
<style scoped>
@import "https://cdn.jsdelivr.net/npm/animate.css@3.5.1";
@import "https://maxcdn.bootstrapcdn.com/font-awesome/4.7.0/css/font-awesome.min.css";
  .holder {
    background: #fff;
  }
  ul {
    margin: 0;
    padding: 0;
    list-style-type: none;
  }
  
  ul li {
    padding: 20px;
    font-size: 1.3em;
    background-color: #E0EDF4;
    border-left: 5px solid #3EB3F6;
    margin-bottom: 2px;
    color: #3E5252;
  }
  p {
    text-align:center;
    padding: 30px 0;
    color: gray;
  }
  .container {
    box-shadow: 0px 0px 40px lightgray;
  }
  input{
    width: calc(100% - 40px);
    border: 0;
    padding: 20px;
    font-size: 1.3em;
    background-color: #323333;
    color: #687F7F;
  }
  .alert-in-enter-active {
    animation: bounce-in .5s;
  }
  .alert-in-leave-active {
    animation: bounce-in .5s reverse;
  }
  @keyframes bounce-in {
    0%{
      transform: scale(0);
    }
    50% {
      transform: scale(1.5);
    }
    100% {
      transform: scale(1);
    }
  }
  i{ float:right;
     cursor:pointer;
  }
</style>