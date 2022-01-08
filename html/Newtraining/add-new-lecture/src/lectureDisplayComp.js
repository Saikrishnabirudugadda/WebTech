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
    updateLectureObj(lecture);
    }
    const handleOnRemoveLec = (event) =>{
    props.onRemoveLec(lectureObj);
    }   

const setArticleToListState = () =>{
    const lecture = {...lectureObj,...{articleStatus: true, article:{ text: lectureObj.article.text, state: "LIST"}}};
    updateLectureObj(lecture);
    props.setLecEditState(lecture);
    }

const  setArticleToEditState = () =>{
  const lecture = {...lectureObj,...{articleStatus: true, article:{ text : lectureObj.article.text, state: "EDIT"}}};
  updateLectureObj(lecture);
  props.setLecEditState(lecture);
  }
const  setArticleToDisplayState = (lectureObject) =>{
  updateLectureObj(lectureObject);
  props.setLecEditState(lectureObject);
  }

  const removeAtricle = () =>{
    const lecture = {...lectureObj,...{articleStatus: false}};
    updateLectureObj(lecture);
    
}


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
                    <button onClick = {setArticleToListState} >Add content</button>
                    {
                        lectureObj.articleStatus ?
                        lectureObj.article.state === 'LIST'?  <ArticleListComp key = {lectureObj.id + "articleList"} lecObj = {lectureObj} 
                        onHandleRemoveLecture = {removeAtricle} onHandleArticleEditState = {setArticleToEditState} />:
                        [lectureObj.article.state === 'EDIT' ?  <ArticleEditComp key = {lectureObj.id  + "articleEdit"} lecObj = {lectureObj} onHandleArticleListState = {setArticleToListState} onHandleArticleDisplayState = {setArticleToDisplayState}  />:
                         <ArticleDisplayComp key = {lectureObj.id + "articleDisplay"} lecObj = {lectureObj} onHandleArticleListState = {setArticleToListState} onHandleArticleEditState = {setArticleToEditState}/>]: null
                        
                    }
                    
            </div> 
        </div> 
    );
  }
  
  export default LectureDisplayComp;
