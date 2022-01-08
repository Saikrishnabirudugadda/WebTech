import React, {useState, useEffect} from "react"; 
function ArticleDisplayComp(props) {

    return (
        
            <div className = "content">
                <p>Content: {props.lecObj.article.text}</p>
                <button onClick = {props.onHandleArticleListState}>Cancel</button>
                <button onClick = {props.onHandleArticleEditState}>Edit</button>
            </div>
    );
  }
  
  export default ArticleDisplayComp;
