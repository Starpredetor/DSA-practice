JQuery is a lightweight, "write less, do more" and JavaScript library. The purpose of jQuery is to make it much easier to use JavaScript on your website. JQuery takes a lot of common tasks that require many lines of JavaScript code to accomplish, and wraps them into methods that you can call with a single line of code. JQuery also simplifies a lot of the complicated things from JavaScript, like AJAX calls and DOM manipulation.
The jQuery library contains the following features:
•	HTML/DOM manipulation
•	CSS manipulation
•	HTML event methods
•	Effects and animations
•	AJAX
•	Utilities
jQuery Syntax:
The jQuery syntax is tailor made for selecting HTML elements and performing some action on the element(s). With jQuery you select (query) HTML elements and perform "actions" on them. Basic syntax is: $(selector).action()
•	A $ sign to define/access jQuery
•	A (selector) to "query (or find)" HTML elements A jQuery action() to be performed on the element(s)
The Document Ready Event:
$(document).ready (function(){ // jQuery methods go here... });
This is to prevent any jQuery code from running before the document is finished loading (is ready).
It is good practice to wait for the document to be fully loaded and ready before working with it. This also allows you to have your JavaScript code before the body of your document, in the head jQuery selectors are one of the most important parts of the jQuery library. jQuery selectors allow you to select and manipulate HTML element(s). jQuery selectors are used to "find" (or select) HTML elements based on their id, classes, types, attributes, values of attributes and much more. It's based on the existing CSS Selectors, and in addition, it has some own custom selectors.
All selectors in jQuery start with the dollar sign and parentheses: $().
The element Selector:
The jQuery element selector selects elements based on the element name. You can select all <p> elements on a page like this:
$("p")
Example
When a user clicks on a button, all <p> elements will be hidden: Example
$(document).ready(function(){ $("button").click(function(){ $("p").hide(); }); });
The #id Selector:
The jQuery #id selector uses the id attribute of an HTML tag to find the specific element.
An id should be unique within a page, so you should use the #id selector when you want to find a single, unique element.
To find an element with a specific id, write a hash character, followed by the id of the element: $("#test")
Example
When a user clicks on a button, the element with id="test" will be hidden:
Example
$(document).ready(function(){ $("button").click(function(){ $("#test").hide(); }); });
The .class Selector:
The jQuery class selector finds elements with a specific class.
To find elements with a specific class, write a period character, followed by the name of the class: $(".test")
Example
When a user clicks on a button, the elements with class="test" will be hidden:
Example
$(document).ready(function(){ $("button").click(function(){ $(".test").hide(); }); });
Functions In a Separate File:
If your website contains a lot of pages, and you want your jQuery functions to be easy to maintain, you can put your jQuery functions in a separate .js file. However, sometimes it is preferable to place them in a separate file, like this (use the src attribute to refer to the .js file:

