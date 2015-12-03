<?php
    //At this point, we draw(echo) nothing
    //First we must load the Page Object
    //Then we configure it
    //Since this is index.php, its always a landing style page
    //For this example, the landing page is a register or login page
    //Base is generic and empty, user can modify CLASS (or subclass it) to generate new pages
    //Stylesheets, Javascripts and even php scripts can be plugged via filename (mind that working directory)

    //Server gets mad if we dont set timezone now
    date_default_timezone_set('America/Los_Angeles');

    //Require the classes/genPageClass.php.inc	(remember we are not actually in classes directory)
    require_once('classes/genPageClass.php.inc');
    
    //Create thisPage
    $thisPage = new genPageClass();
    
    //Setup the page (Change these freely, each page or use config file) (TODO: make config file stuff)
    $thisPage->config['baseCSS'] = 'genPageBase.css';
    $thisPage->config['menuCSS'] = 'navMenu.css';
    $thisPage->config['rootURL'] = 'http://www.geekprojex.com/';
    $thisPage->config['pageTitle'] = 'GeekProjex.com';
    //Database config is stored in inc/dbconf.php.inc
    //Edit it once, all use the same file. (via runQuery)
    
    //draw the page
    $thisPage->draw();
    //Yea... thats all. The rest is in the class.
?>