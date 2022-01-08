import React, {useState, useEffect} from "react"; 
function ArticleEditComp(props) {
        const [lectureObj, updateLectureObj] = useState(props.lecObj)

         useEffect(()=>
         {
                 if(lectureObj.article.state === "DISPLAY")
                 {
                        props.onHandleArticleDisplayState(lectureObj);
                 }
         });

        const handleTextarea = (event) =>{
                const lecture = {...lectureObj,...{article:{text: event.target.value, state : "EDIT"}}}
                updateLectureObj(lecture);
        }
        const handleSaveTextarea = () =>{
                const lecture = {...lectureObj,...{article:{ text : lectureObj.article.text, state: "DISPLAY"}}};
                updateLectureObj(lecture);
        }
    return (
        
            <div className = "content">
            <textarea id = {props.lecObj.id} rows = "5" cols = "50" onChange = {handleTextarea} value = {lectureObj.article.text} placeholder = "Enter text here." > </textarea>
            <button onClick = {props.onHandleArticleListState}>Cancel</button>
            <button onClick = {handleSaveTextarea}>Save</button>
            </div>
    );
  }
  
  export default ArticleEditComp;
