# Simple-Php-Framework
This was an experiment with PHP OOP.
I heard someone say 'probably use OOP with PHP and make a nice website'.
I wasnt doing that yet.

So I made a class, whose purpose is to configure and generate the website it is dedicated to.
The first few worked well, but were very specific and much was hardcoded.
So... making new ones required a full restart and only the process survived.
Each time, the technique changed, improved, got a little more modularized.

It dawned on me I needed a generic base, still able to scale up to needs of most of my sites.
I read about MVC and realize I am probably reinventing the wheel. I am prone to doing that. I'm ok with it.
I am probably doing things in an unusual fashion, I will make mistakes and I will learn more.

I enjoy using this [experiment] to rapidly generate nifty websites. 
This repo is my attempt to expose it to scrutiny AND primarily attempt to improve it. 
I think it qualifies as 'model view controller', which I am only just learning of as a concept.

I learned PHP from reading a 'No Starch Press' book on it and creating websites with it.
I knew OOP from my C++ days. So using it in PHP was just a matter of syntax (and the fun scope of network request/response).
I include Javascript for front end tasks, The PHP is the master controller, forms apis around the backend.

The model is 'login page hybrid register landing page' primarily for login based sites.
Authentication could be removed/relocated to create pure info-pages or sell pages/landing pages.

I think of it as treating PHP like a C application.
I echo html, but I do it from my member methods. 
To some MVC pro, this probably looks silly, maybe it is, it works for me so far.
I learned most of my programming before we used most of those terms. The concepts however, are not foreign to me.
