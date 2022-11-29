use std::io;

fn main() {
    let mut s_total = String::new();
    io::stdin().read_line(&mut s_total).expect("Input Error");
    let total = s_total.trim().parse().expect("Parse Error");

    let mut s_nums = String::new();
    io::stdin().read_line(&mut s_nums).expect("Input Error");
    let nums: Vec<f64> = s_nums.trim().split_whitespace()
        .map(|x| x.parse().expect("Parse Error"))
        .collect();

    let mut avg: Vec<f64> = vec![];
    let mut avg_num = 0.0;
    for i in 0..total {
        avg_num += nums[i];
        avg.push(avg_num / (i + 1) as f64); 
    }

    for ele in avg {
        println!("{}", ele);
    }


}
