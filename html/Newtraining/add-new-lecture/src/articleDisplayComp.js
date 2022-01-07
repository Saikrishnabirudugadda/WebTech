import React, {useState} from "react"; 
function ArticleDisplayComp(props) {
    const [lectureObj, updateLectureObj] = useState(props.lecObj)
    const displayList = () =>{
        const lecture = {...lectureObj,...{articleStatus: true, article:{ text : props.lecObj.article.text, state: "LIST"}}}
        updateLectureObj(lecture);
        props.onDisplayList(lectureObj);

}
    const handleEditArticle = ()=>{
        const lecture = {...lectureObj,...{articleStatus: true, article:{text : props.lecObj.article.text, state: "EDIT"}}}
                updateLectureObj(lecture);
                props.onEditArticle(lectureObj);
    }
    return (
        
            <div className = "content">
                <p>Content: {props.lecObj.article.text}</p>
                <button onClick = {displayList}>Cancel</button>
                <button onClick = {handleEditArticle}>Edit</button>
            </div>
    );
  }
  
  export default ArticleDisplayComp;