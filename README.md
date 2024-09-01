Get all project codes for B.tech 1st year.
<br>
How to enable pasting on moodle :

> To enable pasting :) <br>
>  Paste this whole code in console and press enter <br>
>  sometimes may ask to type "allow paste" in console, do that and press enter then paste this and press enter <br>

<br>
<br>
var allowCopyAndPaste = function (e) {<br>
  e.stopImmediatePropagation();<br>
  return true;<br>
};<br>
document.addEventListener("copy", allowCopyAndPaste, true);<br>
document.addEventListener("paste", allowCopyAndPaste, true);<br>
document.addEventListener("onpaste", allowCopyAndPaste, true);<br>
