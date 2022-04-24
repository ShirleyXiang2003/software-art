# software-art

**Assignment 2 - motion** <br /> <br />
Basically, my work is composed of a few falling sakura. It is inspired by the song thoughts through time and space. This song is from a famous Japanese animation called Inuyasha.  This animation tells a pathetic love story of a monster called Inuyasha and a human girl named Gewei. The song creates a sense of poignant sadness in my opinion. Thus, inspired by this, I was trying to visualize this sense of sadness. <br />

I used five images and one song as extra data files. The five files include one image of petals, two images of flowers, one image of Sakura tree, and one image of background in which the two protagonists sit on the tree together. They are all in png extension. The song I loaded is thoughts through time and space.<br />

As for petals, I randomly generate them on the screen by a for loop. And they move in a random motion. I intended to make them move much faster than all other images, for I want to create a sense that these petals are lighter than others. In addition, I adjust these petals with size 20x20 since I want to create a picture where these petals are on the back of all other falling flowers. When it comes to falling flowers, I loaded two kinds of images – one is a “half flower”, the other is an intact flower. For the “half flowers”, I created a few of them on the screen manually (namely, not using a for loop). They are falling in a different velocity with gravity 2 in contrast to the gravity of petals 9.81. As for the intact flower, they are also falling in a different velocity than the other two with a gravity 1.2. These flowers differ from petals in the fact that they rotate from time to time as the parameter offset changes. But they will not change in the same direction, as the degree of rotation is made different at the very beginning. <br />

The falling flowers are self-repetitive. They will move more and more quickly just as what they would do in a real world. As they reach the end of the screen, the program will generate a new group of flowers with the same beginning positions and beginning velocities, as well as a constant acceleration. <br />

When it comes to the background music, it will loop by itself when it ends. Users can adjust the volume of the music by pressing key w for increasing the volume (by 0.1) and key s for decreasing the volume (by 0.1). The volume will be displayed on the left corner of the screen in the form of message. <br />

By default, there will not be background image showing. If users want the image to appear, they should press key b (stands for background) to make it visible. If users want the image to disappear, they can press c (stands for close) to close the background image.<br />

In all, I love what I got for this assignment. It provides me a valuable opportunity to create a scene that I think can fit well with the song, which is what I wished to do when I was young. <br />

<img width="1439" alt="Screen Shot 2022-04-24 at 7 57 52 PM" src="https://user-images.githubusercontent.com/102908435/164989133-85cec57d-a786-40c7-9a57-8685755bef0f.png">
<img width="1438" alt="Screen Shot 2022-04-24 at 7 58 01 PM" src="https://user-images.githubusercontent.com/102908435/164989139-46fadc08-3668-4b57-b643-7a875b66ac95.png">


**Sketch2 - motion** <br /> <br />
The interface is set with white background. The work is basically composed of two animating circles. One circle begins with radius 300, and it will become smaller and smaller until radiuses reach 60, it backs to 300. The other one beings with radius 60, and it will become larger and larger until its radius reaches 300, it backs to 60. <br />

The two circles are changing its radius in the same rate. The range of both circles are from 60 to 300. The rule for the animation is that when one circle is growing bigger, the other is shinking. The color is constantly changing with different rate I gave to them. And As the color parameters of red, green, and blue color reaches 255 respectively, it will come back to 0.

<img width="947" alt="Screen Shot 2022-04-18 at 11 59 05 AM" src="https://user-images.githubusercontent.com/102908435/163776780-1810b1cd-4aa7-42fb-922d-ae2f49aed93f.png"><br />

<img width="748" alt="Screen Shot 2022-04-18 at 11 58 59 AM" src="https://user-images.githubusercontent.com/102908435/163777917-980e34e9-1e6d-4bb2-8575-bd1432c20281.png"><br />

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








