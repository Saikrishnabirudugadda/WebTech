import React, {useState, useEffect} from "react"; 
import ArticleListComp from "./articleListComp";
import ArticleEditComp from "./articleEditComp";
import ArticleDisplayComp from "./articleDisplayComp";
function LectureDisplayComp(props) {

     const [lectureObj, updateLectureObj] = useState(props.lectureObj);
    useEffect(()=> {
    if(lectureObj.lectureState === 'EDITLECNAME')
    {
      props.setLecEditState(lectureObj);
    }
  });
 


    const handleEditLecInput = (event) =>{
    const lecture = {...lectureObj,...{lectureState: "EDITLECNAME"}};
    console.log(lecture);
    updateLectureObj(lecture);
  }
    const handleOnRemoveLec = (event) =>{
    props.onRemoveLec(lectureObj);
}

const handleDisplayList = (event) =>{
    const lecture = {...lectureObj,...{articleStatus: true, article:{ text: "", state: "LIST"}}};
    updateLectureObj(lecture);
    props.setLecEditState(lectureObj);
    console.log(lecture);

}
const handleArticleState  = (lecObj) =>{
  updateLectureObj(lecObj);
  props.setLecEditState(lectureObj);

}
    let lectuereArticle = props.lectureObj.article;
    // console.log(props.lectureObj);
    return (
        <div className = "addNewLecture">
            <div id = {"section" + props.lectureObj.id} className = "sections">
                <label>Lecture</label> <label>{props.lecNum}:</label>
                    <label id = {"label" +  props.lectureObj.id}> {lectureObj.lectureName} </label>
                    <button id = {"edit" +  props.lectureObj.id} onClick = {handleEditLecInput} >
                        <span className="glyphicon glyphicon-edit">Edit</span>
                    </button>
                    <button id = {"del" +  props.lectureObj.id} onClick = {handleOnRemoveLec} >
                        <span className="glyphicon glyphicon-remove"></span>Remove</button>
                    <button onClick = {handleDisplayList} >Add content</button>
                    {
                        props.lectureObj.articleStatus ?
                        lectuereArticle.state === 'LIST'?  <ArticleListComp key = {props.lectureObj.id} lecObj = {props.lectureObj} handleAddArticle = {handleArticleState} />:
                        [lectuereArticle.state === 'EDIT' ?  <ArticleEditComp key = {props.lectureObj.id} lecObj = {props.lectureObj} onSaveArticle = {handleArticleState} onDisplayList = {handleArticleState}/>:
                         <ArticleDisplayComp key = {props.lectureObj.id} lecObj = {props.lectureObj} onEditArticle = {handleArticleState} onDisplayList = {handleArticleState} />]: null
                        
                    }
                    
            </div> 
        </div> 
    );
  }
  
  export default LectureDisplayComp;