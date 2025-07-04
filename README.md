# CalcBC_Project

Graph of two formulas within the domain I set: https://www.desmos.com/calculator/w5dqwm0tgj

Two endpoints I chose are `x ≈ -7.251` and `x ≈ -5.463`, and it looks like this.


![](images/desmos_graph.png)

I wrote codes for...
```
1) x-values
2) first formula
3) second formula
```
All codes are in /codes folder.
For compiling and running codes in C try commands below on your terminal (or CUI app)...

```
gcc -o [filename].exe [filename].c
```
and then
```
./[filename].exe
```

Then I copied and pasted the results on google spreadsheet, and then exported the XYZ values in .csv file, which I directly imported to Fusion360.

(the importing process took very long because I tried to plot 1789 points x2 graphs)

![](images/fusion_graph.png)


Then I revolved the plotted graph around `y ≈ 0.3788` because that is where Fusion360 doesn't give the solids-overlapping error. 

![](images/solid.png)



__WARNING__ for checking the volume though.

I got this...because my endpoints were not accurate and Fusion360 could not construct a cross sectional area.

![](images/novolume.png)


___Possible Solutions___
- you can create tables on desmos and record x and y values of the graphs on spreadsheet.
- refine the codes somehow
- tweak the endpoints so their values are equal (take average etc)

After some tweaking I got this

![](images/volume.png)




Also, I found Fusion360 creating an area outside the lines...
![](images/extra_area.png)


So I set endpoints equal for both spreadsheets to create region... and this is what I got

![](images/region.png)
![](images/volume.png)

__3D Printed Shape__

![](images/printed_top.jpg)
![](images/printed_bottom.jpg)
