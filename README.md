Get all project codes for B.tech 1st year.

How to enable pasting on moodle :

> To enable pasting :)
>  Paste this whole code in console and press enter
>  sometimes may ask to type "allow paste" in console, do that and press enter then paste this and press enter


>var allowCopyAndPaste = function (e) {
>  e.stopImmediatePropagation();
>  return true;
>};
>document.addEventListener("copy", allowCopyAndPaste, true);
>document.addEventListener("paste", allowCopyAndPaste, true);
>document.addEventListener("onpaste", allowCopyAndPaste, true);
