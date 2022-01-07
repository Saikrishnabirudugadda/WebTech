import React, {useState} from "react"; 
function ArticleEditComp(props) {
        const [lectureObj, updateLectureObj] = useState(props.lecObj)
        const displayList = () =>{
                const lecture = {...lectureObj,...{articleStatus: true, article:{ text : props.lecObj.article.text, state: "LIST"}}}
                updateLectureObj(lecture);
                props.onDisplayList(lectureObj);

        }
        const handleTextarea = (event) =>{
                const lecture = {...lectureObj,...{articleStatus: true, article:{ text: event.target.value, state: "DISPLAY"}}}
                updateLectureObj(lecture);
        }
        const handleSaveTextarea = () =>{
                const lecture = {...lectureObj,...{articleStatus: true, article:{  text : props.lecObj.article.text, state: "DISPLAY"}}}
                updateLectureObj(lecture);
                props.onSaveArticle(lectureObj);
        }
    return (
        
            <div className = "content">
            <textarea id = {props.lecObj.id} rows = "5" cols = "50" onChange = {handleTextarea} >{lectureObj.article.text}</textarea>
            <button onClick = {displayList}>Cancel</button>
            <button onClick = {handleSaveTextarea}>Save</button>
            </div>
    );
  }
  
  export default ArticleEditComp;