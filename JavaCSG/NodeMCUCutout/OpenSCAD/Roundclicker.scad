rotate([0.0, 90.0, 0.0])
{
    intersection()
    {
        difference()
        {
            rotate_extrude(angle = 360.0, $fn = 128)
            {
                M71();
            }
            translate([0.0, 0.0, 2.0])
            {
                linear_extrude(height = 10.0, twist = 0.0, scale = 1.0, slices = 1, center = false)
                {
                    scale([10.0, 1.6])
                    {
                        M8();
                    }
                }
            }
        }
        linear_extrude(height = 10.0, twist = 0.0, scale = 1.0, slices = 1, center = false)
        {
            scale([5.0, 10.0])
            {
                M8();
            }
        }
    }
}

module M71()
{
    polygon
    (
        points =
        [
            [0.0, 0.0], 
            [3.9, 0.0], 
            [3.9, 1.0], 
            [2.9, 2.0], 
            [2.9, 7.7], 
            [3.9, 8.7], 
            [2.9, 10.0], 
            [0.0, 10.0], 
            [0.0, 2.0]
        ],
        paths =
        [
            [0, 1, 2, 3, 4, 5, 6, 7, 8]
        ]
    );
}

module M8()
{
    polygon
    (
        points =
        [
            [-0.5, -0.5], 
            [0.5, -0.5], 
            [0.5, 0.5], 
            [-0.5, 0.5]
        ],
        paths =
        [
            [0, 1, 2, 3]
        ]
    );
}
