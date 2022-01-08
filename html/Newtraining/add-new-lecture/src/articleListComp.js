import React, {useState, useEffect} from "react"; 
function ArticleListComp(props) {
      
    return (
        
            <div className = "content">
            <button onClick = {props.onHandleRemoveLecture}>Cancel</button>
            <button onClick = {props.onHandleArticleEditState}>Add Article</button>
            </div>
    );
  }
  
  export default ArticleListComp;
