# The geometry of the doughnut and the spinning logic for the doughnut

The following will be the summary of my research on how the spinning logic for the doughnut should be made.

## Geometry of a doughnut

A doughnut is nothing more than a *ring torus*(https://en.wikipedia.org/wiki/Torus).

A torus of revolution in 3-space can be parametrized as:

x(θ , φ) = (R+ r sin θ) cos φ 

y(θ , φ) = (R+ r sin θ)sin φ 

z(θ , φ) = r cos θ

### φ (phi) and θ (theta)

in the x(θ , φ) φ (phi) represents the circle that goes around the outside ring and θ (theta) represents the point on that ring.

φ picks which ring (or which direction around the main circle) you’re looking at,

θ picks where on that small circular cross-section you are.


using angular coordinates θ, φ ∈ [0, 2π), representing rotation around the tube and rotation around the torus's axis revolution, respectively, where the major radius R is the distance from the center of the tube to the center of the torus and the minor radius r is the radius of the tube.

The ratio R/r is called the aspect ratio of the torus. The typical doughnut confectionery has an aspect ratio of about 3 to 2.

To get a ring torus R must be greater than r.

R > r: ring torus or anchor ring

