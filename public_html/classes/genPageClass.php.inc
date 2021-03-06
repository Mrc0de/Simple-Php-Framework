<?php
//Generic Page Class
//By MrC0de

//I tend to skip the first indent.
//ie: I dont count the php tags

class genPageClass {
    //Variables (defaults usually get overridden after creation, left this as a guide)
    public $config = array( 
        "pageTitle" => "GeekProjex.com",
        "baseCSS" => "inc/genPageBase.css",
        "menuCSS" => "inc/navMenu.css",
        "rootURL" => "http://www.geekprojex.com/",
    );
    public $lastInsertId = 0;
    //End Variables

    public function startHtml () {
        echo '<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">';
        echo '<html xmlns="http://www.w3.org/1999/xhtml" >';
            echo '<head>';
                echo '<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />';
                echo '<meta name="viewport" content="width=device-width, initial-scale=1, maximum-scale=1">';
                if ( !empty($this->config['menuCSS']) ) {
                    echo '<link href="' . $this->config['rootURL'] . $this->config['menuCSS'] . '" rel="stylesheet" type="text/css">';
                }
                if ( !empty($this->config['baseCSS']) ) {
                    echo '<link href="' . $this->config['rootURL'] . $this->config['baseCSS'] . '" rel="stylesheet" type="text/css">';
                }
                echo '<title>'. $this->config['pageTitle'] .'</title>';						
            echo '</head>';	    
    }
    //End startHtml 

    public function draw( $bodyId = "defBodyId", $headerId="defHeaderId",$contentId="defContentId", $footerId="defFooterId"){
        //Draw whatever your first seen page is (ie: landing page)
        $this->startHtml(); //first thing
        echo '<body id=' . $bodyId . '>';
            //draw header inside body
            echo '<div id=' . $headerId . '>';
                //header guts                    
                //echo '<img id="headerLogo" src="imgs/frontend/logo.png" style="float:left;"/>';
                echo '<h2> Geekprojex.com Code Example </h2>';
                $this->newDiv("clearleft;");			
            $this->closeDiv();

            echo '<div id=' . $contentId . '>';
                //Content Guts
                echo 'The code for this site can be found at https://github.com/Mrc0de/Simple-Php-Framework</br>';
            $this->closeDiv();
            echo '<div id=' . $footerId . '>';
                //Footer Guts
                echo 'Pretty Frikkin Easy...';
            $this->closeDiv();
            $this->newDiv("clearboth;");
        $this->endPage();
        //End Of Draw For Landing Page
        //Now send the user somewhere else
    }

    //Database Stuff
    public function runQueryPgsql($pgQuery) {
        //This one uses Postgres instead of MySql
        //Webmaster can choose which to use when drawing, saving, etc...
        if ( is_file ('inc/dbconf.php.inc') ) { require('inc/dbconf.php.inc'); }
    }

    public function runQuery($query) {
        if ( is_file ('inc/dbconf.php.inc') ) { require('inc/dbconf.php.inc'); }
        try {
            $dbcon = mysql_connect($db_host,$db_user,$db_pass);
            mysql_select_db($db_name,$dbcon);
            $results = mysql_query($query,$dbcon);
            if ( !$results ) { $ohshit = mysql_error();throw new Exception($ohshit); }
        } catch (Exception $e) {
            echo "<br/>Oops -> "  . $e->getMessage() . "<br/>";
        }
        if ( strpos(strtolower($query),'insert') === 0 ) {
            $this->lastInsertId = mysql_insert_id($dbcon);
        }
        mysql_close($dbcon);
        return $results;
    }

    //Utility Drawing Functions
    //I got tired of making divs by hand. I dont anymore.
    public function newDiv($style='inline',$styleCode=''){
        switch ($style) {
            case 'inline': echo '<div style="'. $styleCode . '">';break;
            case 'newClassNoStyle': echo '<div class="'. $styleCode . '">';break;
            case 'newIdNoStyle': echo '<div id="'. $styleCode . '">';break;
            case 'clearleft': echo '<div style="clear:left;"></div>'; break;
            case 'clearright': echo '<div style="clear:right;"></div>'; break;
            case 'clearboth': echo '<div style="clear:both;"></div>'; break;
        }
    }
    public function closeDiv() { echo '</div>'; }
    public function ebr( $brNum='1' ) { for($a=0;$a<$brNum;$a++) { echo '</br>'; }	}
    public function endPage() { echo '</body></html>'; }      
};


?>