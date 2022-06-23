$(document).ready(function(){ // html파일이 실행되기 전에 실행합니다.
    $('#limit').on('keyup', function() { 
    // id값이 limit를 가지고 있는 태그에 입력이 되었을 경우에 실행합니다. 
        $('#limit_count').html("("+$(this).val().length+" / 200)");
        // id값이 limit_count 가지고있는 태그에 limit의 value 값의 길이를 출력합니다. 

        if($(this).val().length > 200) { // limit의 value 값이 길이가 200을 넘긴 경우에 실행합니다.
            $(this).val($(this).val().substring(0, 200)); 
            // limit의 value 값은 substring을 통해 0 ~ 200까지 index를 지정합니다, 
            // 다시 말하면 200타를 넘어가면 무조건 200번째까지만 입력이 된다는 뜻입니다.
            
            $('#limit_count').html("(200 / 200)"); // 200타를 채웠다는 의미로 ( 200 / 200 ) 을 출력시킵니다.
        }
    });
});