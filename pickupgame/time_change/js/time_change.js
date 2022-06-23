$(document).ready(function(){// 페이지가 시작하면 바로적용
    let date1 = new Date(); // 현재 년,월,일,시간을 저장
    let year = date1.getFullYear(); // 현재 년도를 year에 저장
    let hours = 12; // 12시 고정으로 hours 저장
    let month = date1.getMonth(); // 현재 월을 month에 저장
    let date = date1.getDate(); // 현재 일을 date에 저장

    let date2 = new Date(year,month,date,hours);
    // 12시는 고정으로 나머지, 년도,월,일은 현재 시 

    if(date1 < date2){ // 12시 이전인 경우
        $('#hello').addClass("morning"); // 12시 이전이면 morning class 추가
        $('#hello').removeClass("dinner"); // 12시가 이전이면 dinner class 제거
    }
    else{// 12시가 지난 경우
        $('#hello').addClass("dinner"); // 12시가 지나면 dinner class 추가
        $('#hello').removeClass("morning"); // 12시가 지나면 morning class 제거
    }
});
