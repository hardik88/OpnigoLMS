<div class="login_content">
        <div class="container-fluid">
            <div class="login_content_inner">
                <div class="login_content_box">
                    <div class="login_container">
                        <div class="logo_img">
                            <img src="<?php print base_path() . path_to_theme() ?>/img/logo.png" alt="logo">
                        </div><!-- logo_img End -->
                        <div class="login_header">
                            <h1>National Dairy Development Board</h1>
                            <h2>E-Learning Management System</h2>
                        </div><!-- login_header End -->
                        <div class="login_from">
                            <?php 
							$form = drupal_get_form('user_login_block');
							//print $form;
							print(drupal_render(drupal_get_form("user_login")));
							?>
                        </div><!-- login_from End -->
                        <p>This system is open only to registered members of the NDDB Virtual Learning Environment.</p>
                        <p>Please <a href="#">click here</a> for more information about this E-LMS or go to the <span>Main NDDDB portal.</span></p>
                    </div><!-- login_container End -->
                </div><!-- login_content_box End -->
            </div><!-- login_content_inner End -->
        </div><!-- container-fluid End -->   
   </div><!-- login_content End -->