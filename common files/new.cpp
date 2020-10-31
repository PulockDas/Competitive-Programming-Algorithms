///left-up
if(food_x>=39 && food_x<=117 && food_y>=91 && food_y<=104)
    goto food;
if(food_x>=104 && food_x<=117 && food_y>=39 && food_y<=91 )
    goto food;

///right-up
if(food_x>=507 && food_x<=585 && food_y>=39 && food_y<=52)
    goto food;
if(food_x>=572 && food_x<=585 && food_y>=52 && food_y<=104)
    goto food;

///right-down
if(food_x>=507 && food_x<=585 && food_y>=299 && food_y<=312)
    goto food;
if(food_x>=507 && food_x<=520 && food_y>=312 && food_y<=377)
    goto food;

///left-down
if(food_x>=39 && food_x<=117 && food_y>=364 && food_y<=377)
    goto food;
if(food_x>=39 && food_x<=52 && food_y>=299 && food_y<=364)
    goto food;

///left-line
if(food_x>=221 && food_x<=234 && food_y>=78 && food_y<=338)
    goto food;

///right line
if(food_x>=403 && food_x<=416 && food_y>=78 && food_y<=338)
    goto food;
