$(document).ready(function(){ 
    const target = document.getElementById('least_button');
    target.disabled = true;
    $('#least').on('keyup', function() {
        $('#least_count').html("( "+$(this).val().length+" ) 최소 30자 이상 입력해야합니다.");
        if($(this).val().length >= 30) {
            target.disabled = false;
        }
        else{
            target.disabled = true;
        }
    });
});