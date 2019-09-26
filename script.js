$(document).ready(function(){
   
    $("#navbar").click();
    
    
  });
  (window).scroll(function() {
    if ($("#navbar").offset().top > 100) {
        $("#navbar").addClass("shrink");
    } else {
        $("#navbar").removeClass("shrink");
    }

});