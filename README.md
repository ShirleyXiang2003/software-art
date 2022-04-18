# software-art

**Sketch2 - motion** <br /> <br />


**Assignment1 - Still** <br /> <br />
This work is inspired by the famous artist Piet Cornelies Mondrian’s work. Mondrian was a pioneer of geometric abstraction, taking geometric figures as the basic elements of painting. Below is the typical artwork by Mondrian. <br />
  ![image](https://user-images.githubusercontent.com/102908435/162787523-1b54ce85-6bfa-42bd-aef9-0cffda40aa63.png)
 ![image](https://user-images.githubusercontent.com/102908435/162787543-eb468553-fe36-42e3-bba8-24cdbe6ce38c.png)

 
He did not paint the objects that can be seen by eyes, but he has restricted his painting language to the most basic elements: straight lines, right angles, the three primary colors (red, yellow, and blue) and the three non-primary colors (white, gray, and black).<br />

However, one thing I spot is that he always restrained works within two-dimensional scope and shapes with sharp angles and surface. Based on this, I was trying to do a secondary innovation on Mondrian’s work that gets rid of this restrain. <br />

Basically, my work composed mainly two parts – the first are the lines in the front or back and the second are the three-dimensional objects. As for the lines, people can change the width of these lines as what they wish by switching the sliders controlling the width. They are drawn in three dimensions but displaying the effect of two dimension. As for the three-dimensional objects, they are two types that users can interact with. One is box. There are six boxes on the screen. They six all have the same length of sides. And users can play with the boxes by changing their length, while the positions are set at one place. The other is sphere. Users can interact with spheres by changing their radiuses, pretty much the same as how boxes work. <br />

To implement this, I first had two toggles that can control which type of objects users want. One toggle controlling boxes and the other controlling spheres. By default, the toggle controlling boxes is turned on and the toggle controlling spheres is turned off. When both toggles are turned on, only boxes will be shown. Lines are objects are randomly placed on the screen. Two parameters intSlider and floatSlider are set to change the size of objects. The range for both for them is from 3 to 200 and the default parameter is 100. Another parameter floatSlider2 is set as to change the thickness of lines. Its range is from -5 to 10 and the default value is 0.  <br />
 <img width="468" alt="image" src="https://user-images.githubusercontent.com/102908435/162787573-18dd9c3e-f258-4b2b-a6aa-97db87d5bb28.png"> <br />
<img width="468" alt="image" src="https://user-images.githubusercontent.com/102908435/162787590-019064c4-a652-466c-81e1-0cdffec2fdf5.png"> <br />
<img width="468" alt="image" src="https://user-images.githubusercontent.com/102908435/162787601-87aaecff-449d-47e7-adb4-797a4586a308.png"> <br />


I kept Mondrian’s use of three primary colors and black colors as one of the rudimentary rules of my work. That is to say, however the work is changing, the colors that compose this piece are yellow, red, blue, white, and black, which are immutable, providing a message of greeting to the inspiration of my work. Another rule is that the positions of lines will not change. The reason for this is that still lines represent a sense of motionlessness, which creates contrast to the geometric objects. As you adjust the parameter of these objects, you’ll see animation of these objects that change their size in a static background. This makes those objects more vivid. To be more specific, these objects are like small animals such as rabbits and dogs that are shut in the cage trying to escape from it. <br /> <br /> <br />


**Sketch 1 - lines** <br />
algorithm: <br />
<pre>
if the toggle is turned on <br />
  then iterate given times of the following <br />
    set the color with parameters given by users <br />
    set the thickness with the parameter given by users <br />
    draw lines with random positions <br />
  
<img width="1004" alt="WX20220404-211127@2x" src="https://user-images.githubusercontent.com/102908435/161596202-40ac5007-95f2-4b10-922d-16ceecd32811.png">
<img width="1009" alt="WX20220404-211243@2x" src="https://user-images.githubusercontent.com/102908435/161596477-adba4b75-a115-414b-9b2d-b0351684ac78.png">








